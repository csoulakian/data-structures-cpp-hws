#pragma once

#include "Node.h"

template<typename T>
class LinkedListIterator {
private:
        Node<T>* _current;
        Node<T>* _tail;

public:
        LinkedListIterator(Node<T>* head, Node<T>* tail) {
                _current = head;
                _tail = tail;
        }

        bool MoveNext() {
                if (_current->Link == (Node<T>*)0) {
                        return false;
                }
                _current = _current->Link;
                return true;
        }

        T GetCurrent() {
                return _current->Value;
        }
};