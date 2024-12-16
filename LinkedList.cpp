#ifndef LINKEDLIST_CPP
#define LINKEDLIST__CPP
#include "LinkedList.h"

template <class T>
bool LinkedList<T>::isEmpty() const
{
    return (head == nullptr && tail == nullptr);
}

template <class T>
Node<T> &LinkedList<T>::getNode(T &data) const
{
    Node<T> *current = head;

    if (isEmpty())
    {
        throw "the Linked List is Empty";
    }
    else
    {
        Node<T> *current = head;
        while (current != nullptr)
        {
            if (current->data == data)
            {
                return *current;
            }
            else
            {
                current = current->next;
            }
        }
    }
    return *current;
}

template <class T>
void LinkedList<T>::clear()
{
    if (head == nullptr)
    {
        cout << "List is already empty. Nothing to clear." << endl;
        return;
    }

    Node<T> *current = head; // Start from the head node
    Node<T> *temp;           // Temporary pointer for safe deletion

    while (current != nullptr)
    {
        temp = current;          // Save the current node
        current = current->next; // Move to the next node

        cout << "Deleting node with data: " << temp->data << endl;

        delete temp;    // Safely delete the current node
        temp = nullptr; // Set temp to nullptr after deletion
    }

    // Reset list pointers and count
    head = nullptr;
    tail = nullptr;
    count = 0;

    cout << "List successfully cleared." << endl;
}

template <class T>
void LinkedList<T>::copyLinkedList(const LinkedList<T> &otherList)
{
    if (!isEmpty())
    {
        clear();
    }
    Node<T> *current = otherList.head;
    while (current != nullptr)
    {
        this->insert(current->data);
        current = current->next;
    }
}

template <class T>
LinkedList<T>::LinkedList() : head(nullptr), tail(nullptr), count(0)
{
}

template <class T>
LinkedList<T>::LinkedList(T &data) : head(nullptr), tail(nullptr), count(0)
{
    Node<T> *newNode = new Node<T>(data);
    head = tail = newNode;
    count++;
}

template <class T>
void LinkedList<T>::insert(T &data)
{
    Node<T> *newNode = new Node<T>(data);
    if (isEmpty())
    {
        head = tail = newNode;
        newNode->prev = nullptr;
        newNode->next = nullptr;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        newNode->next = nullptr;
        tail = newNode;
    }
    count++;
}

template <class T>
T LinkedList<T>::pop()
{
    if (!isEmpty())
    {
        throw "LinkedList is Empty";
    }
    else
    {
        Node<T> *deletedNode = tail;
        T data = deletedNode->data;
        tail = tail->prev;
        count--;
        delete deletedNode;
        return data;
    }
}

template <class T>
LinkedList<T>::LinkedList(const LinkedList<T> &other) : head(nullptr), tail(nullptr), count(0)
{
    this->copyLinkedList(other);
}

template <class T>
LinkedList<T>::LinkedList(Node<T> &node) : head(nullptr), tail(nullptr), count(0)
{
    Node<T> *newNode = new Node<T>(node.data);
    head = tail = newNode;
    count++;
}

template <class T>
void LinkedList<T>::display() const
{
    if (isEmpty())
    {
        throw "the linked List is empty";
    }
    else
    {
        Node<T> *current = head;
        while (current != nullptr)
        {
            cout << current->data << "\t";
            current = current->next;
        }
        cout << endl;
    }
}

template <class T>
int LinkedList<T>::getCount() const
{
    return count;
}

template <class T>
LinkedList<T>::~LinkedList<T>()
{
    clear();
}

template class LinkedList<int>;
template class LinkedList<char>;
template class LinkedList<double>;
template class LinkedList<float>;

#endif