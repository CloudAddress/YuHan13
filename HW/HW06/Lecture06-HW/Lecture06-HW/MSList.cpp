#include "MSList.h"

// Implementation of MSNode constructor
template <typename T>
MSNode<T>::MSNode(T data) : data(data), next_node(nullptr) {}

// Implementation of MSNode destructor
template <typename T>
MSNode<T>::~MSNode() {}

// Implementation of MSList constructor
template <typename T>
MSList<T>::MSList() : _head(nullptr), _size(0) {}

// Implementation of MSList destructor
template <typename T>
MSList<T>::~MSList()
{
    // Traverse the list and delete each node
    MSNode<T>* current = _head;
    while (current != nullptr)
    {
        MSNode<T>* next = current->next_node;
        delete current;
        current = next;
    }
}

// Implementation of get_size method
template <typename T>
int MSList<T>::get_size() { return _size; }

// Implementation of add method
template <typename T>
void MSList<T>::add(T data)
{
    // Create a new node
    MSNode<T>* newNode = new MSNode<T>(data);

    // If the list is empty, make the new node the head
    if (_head == nullptr)
    {
        _head = newNode;
    }
    else
    {
        // Traverse to the end of the list
        MSNode<T>* current = _head;
        while (current->next_node != nullptr)
        {
            current = current->next_node;
        }
        // Add the new node to the end
        current->next_node = newNode;
    }

    // Increment the size of the list
    _size++;
}