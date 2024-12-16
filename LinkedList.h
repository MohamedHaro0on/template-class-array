#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::nullptr_t;
template <class T>
class LinkedList
{
private:
    int count;
    Node<T> *head;
    Node<T> *tail;
    Node<T> &getNode(T &data) const;
    void copyLinkedList(const LinkedList<T> &otherList);
    void clear();
    bool isEmpty() const;

public:
    LinkedList();
    LinkedList(const LinkedList<T> &);
    LinkedList(Node<T> &);
    LinkedList(T &);

    void display() const;
    int getCount() const;

    void insert(T &);
    T pop();

    ~LinkedList();
};

#endif