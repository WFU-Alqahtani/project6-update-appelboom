//
// Created by sarra on 3/30/2020.
//

#include "LinkedList.h"

//Assignment Operator
LinkedList &LinkedList::operator =(const LinkedList & rhs)
{
    LinkedList aList(rhs);
    this->head = aList.getHead();
    return *this;
}

//Functions. You may not need to use them all
void LinkedList::append(CSMatch obj)
{
    Node* current = this->head;
    if (current == nullptr)
    {
        this->head = new Node(obj);
        return;
    }

    while( current->next != nullptr ) {
        current = current->next;
    }
    current->next = new Node(obj);
}

bool LinkedList::Delete (CSMatch obj)
{
    //Delete by id
    Node* current = this->head;
    bool deleted = false;

    if (current == nullptr)
        return false;

    while( current->next != nullptr ) {
        if (current->next->value.getId() == obj.getId()) //found
        {
            Node *next_one = current->next;
            current->next = next_one->next;
            delete next_one;
            deleted = true;
        }
        current = current->next;
    }
    return deleted;
}

CSMatch LinkedList::find (CSMatch obj)
{
   //This function is not useful for now
    return obj;
}

void LinkedList::printList()
{
    Node* current = this->head;
    while( current != nullptr ) {
        cout << current->value;
        current = current->next;
    }
}

void LinkedList::SortedInsert(Node** head_ref, Node* new_node) {
    Node* current;

    if (*head_ref == nullptr || ((*head_ref)->value.getId() >= new_node->value.getId()))
    {
        new_node->next = *head_ref;
        *head_ref = new_node;
    }
    else
    {
        /* Locate the node before the point of insertion */
        current = *head_ref;
        while (current->next!=nullptr &&
               current->next->value < new_node->value)
        {
            current = current->next;
        }
        new_node->next = current->next;
        current->next = new_node;
    }
}

void LinkedList::InsertionSort(Node* list_head) {
    Node *sorted = nullptr;
    Node *current = list_head;
    while (current != nullptr)
    {
        Node *next = current->next;
        this->SortedInsert(&sorted, current);
        current = next;
    }

    this->head = sorted;
}

Node *LinkedList::getHead() const
{
    return head;
}

void LinkedList::setHead(Node *value)
{
    head = value;
}
