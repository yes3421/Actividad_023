#ifndef NODE_H
#define NODE_H

#include "Record.h"

struct Node {
    Record record;
    Node* next = nullptr;
};

#endif
