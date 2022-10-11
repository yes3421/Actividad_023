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
 
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <map>
#include <string>
#include <fstream>
#include <iostream>
#include <stdexcept>

#include "Node.h"
#include "Compare.h"

class LinkedList {

friend std::ostream& operator<<(std::ostream& os, LinkedList& linkedList);

public:
    LinkedList();

    ~LinkedList();

    int length();
    bool isEmpty();
    Record first();
    Record last();

    Record getAt(int pos);
    void setAt(Record record, int pos);

    void insertFirst(Record record);
    void insertLast(Record record);
    void insertAt(Record record, int pos);

    void removeFirst();
    void removeLast();
    void removeAt(int pos);

    void insertionSort();

    void sequentialSearch(const std::string& initial, const std::string& final);

    void writeFile();

protected:
    Node* firstPtr() const;
    Node* lastPtr() const;

private:
    Node* first_;
    Node* last_;
    int length_;

};

#endif
