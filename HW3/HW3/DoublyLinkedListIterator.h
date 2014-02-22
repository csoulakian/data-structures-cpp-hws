#pragma once

#include "DoublyLinkedNode.h"

template<typename T>
class DoublyLinkedListIterator {
private:
        DoublyLinkedNode<T>* _current;
        DoublyLinkedNode<T>* _tail;

public:
        DoublyLinkedListIterator(DoublyLinkedNode<T>* head, DoublyLinkedNode<T>* tail) {
                _current = head;
                _tail = tail;
        }

        bool MoveNext() {
                if (_current->Next == _tail) {
                        return false;
                }
                _current = _current->Next;
                return true;
        }

        T GetCurrent() {
                return _current->Value;
        }

};