#ifndef NODE_H
#define NODE_H

template <class T>
class Node
{
public:
    T data;
    Node<T> *prev;
    Node<T> *next;
    Node<T>();       // Empty Constructor ;
    Node<T>(Node &); // Copy Constructor ;
    Node<T>(T &);    // Parametarized Constructor ;

    // Utility Functions :

    T getData() const;              // get The data inside the node ;
    const Node<T> &getNode() const; // get refernce to the node ;

    void setData(T &); // Set the data inside the node ;
    ~Node<T>();        // Destructor ;
};

#endif