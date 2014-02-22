#pragma once

template<typename T>
class DoublyLinkedNode {
public:
        DoublyLinkedNode(DoublyLinkedNode<T>* previous, DoublyLinkedNode<T>* next, T value) {
                Previous = previous;
                Next = next;
                Value = value;
        }
        DoublyLinkedNode() {
                Previous = (DoublyLinkedNode<T>*)0;
                Next = (DoublyLinkedNode<T>*)0;
        }

        DoublyLinkedNode<T>* Previous;
        DoublyLinkedNode<T>* Next;
        T Value;
};