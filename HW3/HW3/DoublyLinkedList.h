#pragma once

#include "DoublyLinkedNode.h"
#include "DoublyLinkedListIterator.h"

template<typename T>
class DoublyLinkedList {
private:
        DoublyLinkedNode<T>* _head;
        DoublyLinkedNode<T>* _tail;
        DoublyLinkedNode<T>* NULL_NODE = (DoublyLinkedNode<T>*)0;

public:

        DoublyLinkedList() {
                _head = new DoublyLinkedNode<T>();
                _tail = new DoublyLinkedNode<T>();
                _head->Next = _tail;
                _tail->Previous = _head;
        }

        ~DoublyLinkedList() {
                while (_head->Next != _tail) {
                        DeleteFront();
                }
                delete _head;
                delete _tail;
        }

        DoublyLinkedListIterator<T>* CreateIterator() {
                return new DoublyLinkedListIterator<T>(_head, _tail);
        }

        void AddFront(T item) {
                DoublyLinkedNode<T>* node = new DoublyLinkedNode<T>(_head, _head->Next, item);
                _head->Next->Previous = node;
                _head->Next = node;
        }

        void AddEnd(T item) {
                DoublyLinkedNode<T>* node = new DoublyLinkedNode<T>(_tail->Previous, _tail, item);
                _tail->Previous->Next = node;
                _tail->Previous = node;
        }

        void AddMiddle(T item, int position) {
                DoublyLinkedNode<T>* current = GetNodeAt(position);
                DoublyLinkedNode<T>* node = new DoublyLinkedNode<T>(current->Previous, current->Next, item);
                current->Previous->Next = node;
                current->Next->Previous = node;
        }

        void DeleteFront() {
                DoublyLinkedNode<T>* node = _head->Next;
                _head->Next = node->Next;
                _head->Next->Previous = _head;
                delete node;
        }

        void DeleteEnd() {
                DoublyLinkedNode<T>* node = _tail->Previous;
                node->Previous->Next = _tail;
                _tail->Previous = node->Previous;
                delete node;
        }

private:
        DoublyLinkedNode<T>* GetNodeAt(int position) {
                DoublyLinkedNode<T>* current = _head;
                for (int i = (-1); i < position; i++) {
                        if (current == NULL_NODE) {
                                cout << "position is greater than the length of the list" << endl;
                                return NULL_NODE;
                        }
                        current = current->Next;
                }
                return current;
        }
};