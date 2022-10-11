/*
 * Actividad Integral estructura de datos lineales
 *
 * Actividad 2.3
 *
 * Fernando Gabriel Gutiérrez Madrigal A01424790
 * Omar Adalid Macías Mayorquín A01635795
 * Paul Enrique Alonso Ramírez A01634608
 * Programación de estructuras de datos y algoritmos fundamentales
 * Grupo 614
 * Equipo 5
 * Tecnológico de Monterrey, Campus Guadalajara
 * 10 de octubre de 2022
 */
 
#include "LinkedList.h"

LinkedList::LinkedList()
{
    first_ = nullptr;
    last_ = nullptr;
    length_ = 0;
}

LinkedList::~LinkedList()
{
    Node* current;

    while (first_ == nullptr) {
        current = first_->next;

        delete first_;

        first_ = current;
    }
}

int LinkedList::length()
{
    return length_;
}

bool LinkedList::isEmpty()
{
    return length_ == 0;
}

Record LinkedList::first()
{
    return first_->record;
}

Record LinkedList::last()
{
    return last_->record;
}

Record LinkedList::getAt(int pos)
{
    Node* current = first_;

    for (int i = 0; i != pos; ++i) {
        current = current->next;
    }

    return current->record;
}

void LinkedList::setAt(Record record, int pos)
{
    Node* current = first_;

    for (int i = 0; i != pos; ++i) {
        current = current->next;
    }

    current->record.month = record.month;
    current->record.day = record.day;
    current->record.hour = record.hour;
    current->record.IPAddress = record.IPAddress;
    current->record.failure = record.failure;
}

void LinkedList::insertFirst(Record record)
{
    Node* oldFirst = first_;

    first_ = new Node();

    first_->record.month = record.month;
    first_->record.day = record.day;
    first_->record.hour = record.hour;
    first_->record.IPAddress = record.IPAddress;
    first_->record.failure = record.failure;

    first_->next = oldFirst;

    if (length_ == 0) {
        last_ = first_;
    }

    ++length_;
}

void LinkedList::insertLast(Record record)
{
    if (length_ == 0) {
        insertFirst(record);
    }
    else {
        Node* oldLast = last_;

        last_ = new Node();

        last_->record.month = record.month;
        last_->record.day = record.day;
        last_->record.hour = record.hour;
        last_->record.IPAddress = record.IPAddress;
        last_->record.failure = record.failure;

        oldLast->next = last_;

        ++length_;
    }
}

void LinkedList::insertAt(Record record, int pos)
{
    if (pos < 0 || length_ - 1 < pos) {
        throw std::invalid_argument("Invalid position");
    }

    if (pos == 0) {
        insertFirst(record);
    } else if (pos == length_ - 1) {
        insertLast(record);
    } else {
        Node* current = first_;

        for (int i = 0; i != pos - 1; ++i) {
            current = current->next;
        }

        Node* newNode = new Node();

        newNode->record.month = record.month;
        newNode->record.day = record.day;
        newNode->record.hour = record.hour;
        newNode->record.IPAddress = record.IPAddress;
        newNode->record.failure = record.failure;

        newNode->next = current->next;

        current->next = newNode;

        ++length_;
    }
}

void LinkedList::removeFirst()
{
    Node* newFirst = first_->next;

    delete first_;

    first_ = newFirst;

    --length_;
}

void LinkedList::removeLast()
{
    Node* current = first_;

    while (current->next != last_) {
        current = current->next;
    }

    delete current->next;

    current->next = nullptr;

    last_ = current;

    --length_;
}

void LinkedList::removeAt(int pos)
{
    if (pos < 0 || length_ - 1 < pos) {
        throw std::invalid_argument("Invalid position");
    }

    if (pos == 0) {
        removeFirst();
    } else if (pos == length_ - 1) {
        removeLast();
    } else {
        Node* current = first_;

        for (int i = 0; i != pos - 1; ++i) {
            current = current->next;
        }

        Node* deleteNode = current->next;

        current->next = deleteNode->next;

        delete deleteNode;

        --length_;
    }
}

Node* LinkedList::firstPtr() const
{
    return first_;
}

Node* LinkedList::lastPtr() const
{
    return last_;
}

void LinkedList::insertionSort()
{
    
}

// Mapa auxiliar
std::map<int, std::string> intToString{
    {0, "Jan"}, {1, "Feb"},
    {2, "Mar"}, {3, "Apr"},
    {4, "May"}, {5, "Jun"},
    {6, "Jul"}, {7, "Aug"},
    {8, "Sep"}, {9, "Oct"},
    {10, "Nov"}, {11, "Dec"},
};

void LinkedList::sequentialSearch(const std::string& initial, const std::string& final)
{
    static int counter = 1;

    std::string fileName = "salida" + std::to_string(counter) +"-Eq5.txt";

    std::ofstream file(fileName);

    Node* begin = first_;

    while (begin->record.IPAddress != initial) {
        begin = begin->next;
    }

    while (begin->record.IPAddress != final) {
        std::cout
        << intToString[begin->record.month] << " "
        << begin->record.day << " "
        << begin->record.hour << " "
        << begin->record.IPAddress << " "
        << begin->record.failure << '\n';

        file
        << intToString[begin->record.month] << " "
        << begin->record.day << " "
        << begin->record.hour << " "
        << begin->record.IPAddress << " "
        << begin->record.failure << '\n';

        begin = begin->next;
    }

    ++counter;
}

void LinkedList::writeFile()
{
    std::ofstream file("bitacoraOrdenadaIP-Eq5.txt");

    for (
        Node* current = first_;
        current != last_->next;
        current = current->next
    ) {
        file
        << intToString[current->record.month] << " "
        << current->record.day << " "
        << current->record.hour << " "
        << current->record.IPAddress << " "
        << current->record.failure << '\n';
    }
}

std::ostream& operator<<(std::ostream& os, LinkedList& linkedList)
{
    for (
        Node* current = linkedList.firstPtr();
        current != linkedList.lastPtr()->next;
        current = current->next
    ) {
        os
        << intToString[current->record.month] << " "
        << current->record.day << " "
        << current->record.hour << " "
        << current->record.IPAddress << " "
        << current->record.failure << '\n'; 
    }

    return os;
}
