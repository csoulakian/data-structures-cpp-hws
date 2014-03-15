#pragma once

template<typename T>
class Node {
public:

        Node(Node<T>* link, T value) {
                Link = link;
                Value = value;
        }
        Node() {
                Link = (Node<T>*)0;
        }

        Node<T>* Link;
        T Value;
};