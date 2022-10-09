#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <map>
#include <iostream>
#include <stdexcept>

#include "Node.h"

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

protected:
    Node* firstPtr() const;
    Node* lastPtr() const;

private:
    Node* first_;
    Node* last_;
    int length_;

};

#endif
