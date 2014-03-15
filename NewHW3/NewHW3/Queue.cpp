#include "stdafx.h"
#include "Queue.h"

#include <iostream>

using namespace std;

Queue::Queue(int max) {
        _max = max;
        _front = -1;
        _back = -1;
        _items = new int[max];
}

Queue::~Queue() {
        delete _items;
}

void Queue::Print() {
        cout << "front = " << _front << endl;
        cout << "back = " << _back << endl;
        cout << "items: ";
        for (int i = _front; i < _back; i++) {
                cout << _items[i];
                cout << " ";
        }
        cout << endl << endl;
}

void Queue::Enqueue(int item) {
        if (IsFull()) {
                cout << "Queue is full" << endl;
        } else {
                _items[++_back] = item;
        }
}

int Queue::Dequeue() {
        if (IsEmpty()) {
                cout << "Queue is empty" << endl;
        } else {
                return _items[++_front];
        }
}

bool Queue::IsEmpty() {
        return (_front == _back);
}

bool Queue::IsFull() {
        return (_back == _max - 1);
}