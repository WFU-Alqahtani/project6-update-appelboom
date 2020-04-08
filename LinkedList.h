//
// Created by sarra on 3/30/2020.
//

#ifndef BINARYINSERTIONSORT_LINKEDLIST_H
#define BINARYINSERTIONSORT_LINKEDLIST_H

#include "Node.h"
#include <iostream>
using namespace std;

class LinkedList{

public:
    //Constructors
    LinkedList()
    {
        this->head = nullptr;
    }

    LinkedList(const LinkedList & list)
    {
        this->head = nullptr;
        Node* aNode = list.getHead();
        while (aNode != nullptr)
        {
            this->append(aNode->value);
            aNode = aNode->next;
        }
    }

    //Assignment Operator
    LinkedList &operator=(const LinkedList & rhs);

    //Destructor
    ~LinkedList()
    {
        Node* current = this->head;
        while( current != nullptr ) {
            Node* next = current->next;
            delete current;
            current = next;
        }
        this->head = nullptr;
    }

    //Functions. You may not need to use them all
    void append(CSMatch obj);
    bool Delete (CSMatch obj);
    CSMatch find (CSMatch obj);
    void printList();
    void SortedInsert(Node** head_ref, Node* new_node);
    void InsertionSort(Node* list_head);

    Node *getHead() const;
    void setHead(Node *value);

private:
    Node* head;

};

#endif //BINARYINSERTIONSORT_LINKEDLIST_H
