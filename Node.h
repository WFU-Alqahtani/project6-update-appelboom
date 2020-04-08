#ifndef NODE_H
#define NODE_H

#include "CSMatch.h"

class Node {
public:
    // Node constructor
    Node(CSMatch v , Node* n = nullptr)
    {
        value = v;
        next = n;
    }

    //Destructor
    ~Node(){
        delete next;
    }
    friend class LinkedList;
private:

    CSMatch value;
    Node* next;

};

#endif //NODE_H
