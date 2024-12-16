#ifndef NODE_CPP
#define NODE_CPP

#include "Node.h"

template <class T>
Node<T>::Node() : prev(nullptr), next(nullptr)
{
}
template <class T>
Node<T>::Node(Node &other) : prev(nullptr), next(nullptr)
{
    // Node<T> *newNode = new Node(other.data);
    this->data = other.data;
    this->prev = this->next = nullptr;
}
template <class T>
Node<T>::Node(T &data) : prev(nullptr), next(nullptr)
{
    this->data = data;
    this->prev = this->next = nullptr;
}

// Utility Functions :

template <class T>
T Node<T>::getData() const
{
    return this->data;
}

template <class T>
const Node<T> &Node<T>::getNode() const
{
    return *this;
}

template <class T>
void Node<T>::setData(T &data)
{
    this->data = data;
}

template <class T>
Node<T>::~Node()
{
    // delete this;
}

template class Node<int>;
template class Node<char>;
template class Node<double>;
template class Node<float>;
#endif