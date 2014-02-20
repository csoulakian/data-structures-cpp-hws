#pragma once

#include <iostream>

using namespace std;

#include "Node.h"
#include "Iterator.h"

template<typename T>
class LinkedList {
private:
        Node<T>* _head;
        Node<T>* _tail;

        Node<T>* NULL_NODE = (Node<T>*)0;

public:
        LinkedList() {
                _head = new Node<T>();
                _tail = _head;
        }

        LinkedListIterator<T>* CreateIterator() {
                return new LinkedListIterator<T>(_head, _tail);
        }

        void AddFront(T item) {
                _head->Link = new Node<T>(_head->Link, item);
        }

        void AddEnd(T item) {
                _tail->Link = new Node<T>(NULL_NODE, item);
                _tail = _tail->Link;
        }

        void AddMiddle(T item, int position) {
                Node<T>* current = GetNodeAt(position);
                current->Link = new Node<T>(current->Link, item);
        }

        void DeleteFront() {
                Node<T>* toDelete = _head->Link;
                _head->Link = toDelete->Link;
                delete toDelete;
        }

        void DeleteMiddle(int position) {
                Node<T>* current = GetNodeAt(position);
                Node<T>* toDelete = current->Link;
                current->Link = toDelete->Link;
                delete toDelete;
        }

private:

        Node<T>* GetNodeAt(int position) {
                Node<T>* current = _head;
                for (int i = (-1); i < position; i++) {
                        if (current == NULL_NODE) {
                                cout << "position is greater than the length of the list" << endl;
                                return NULL_NODE;
                        }
                        current = current->Link;
                }
                return current;
        }

};