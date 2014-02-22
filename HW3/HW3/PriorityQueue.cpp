#include "stdafx.h"
#include "PriorityQueue.h"
#include <iostream>

using namespace std;

PriorityQueue::PriorityQueue(int max) {
        _max = max;
        _front = -1;
        _back = -1;
        _items = new int[max];
}

PriorityQueue::~PriorityQueue() {
        delete _items;
}

void PriorityQueue::Print() {
        cout << "front = " << _front << endl;
        cout << "back = " << _back << endl;
        cout << "items: ";
        for (int i = _front; i < _back; i++) {
                cout << _items[i];
                cout << " ";
        }
        cout << endl << endl;
}

void PriorityQueue::Enqueue(int sector) {
        if (IsFull()) {
                cout << "Queue is full" << endl;
        } else {
                _sectors.AddEnd(sector);
        }
}

int PriorityQueue::Dequeue(int diskArmLocation) {
        if (IsEmpty()) {
                cout << "Queue is empty" << endl;
        } else {
                return _items[++_front];
        }
}

bool PriorityQueue::IsEmpty() {
        return (_front == _back);
}

bool PriorityQueue::IsFull() {
        return (_back == _max - 1);
}