#include "stdafx.h"
#include "Queue.h"
#include "limits.h"
#include "LinkedList.h"

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
        for (int i = _front + 1; i <= _back; i++) {
                cout << _items[i];
                cout << " ";
        }
        cout << endl << endl;
}

//void Queue::Enqueue(int item) {
//
//		if (IsFull()) {
//			cout << "Queue is full" << endl;
//        } else {
//			_items[++_back] = item;
//        }
//}


//int Queue::Dequeue() { 
//	
//		if (IsEmpty()) {
//                cout << "Queue is empty" << endl;
//        } else {
//                return _items[++_front];
//        }
//}

//New Enqueue function
void Queue::Enqueue(int sector) {

	if (IsFull()) {
            cout << "Queue is full" << endl;
    } else {
            _sectors.AddEnd(sector);
    }
}

//New Dequeue function
int Queue::Dequeue(int diskArmLocation) {
	
	Node<int>* nodeWithMinimum = NULL;
	int minDistance = INT_MAX;
	LinkedListIterator<int>* iterator = _sectors.CreateIterator;
	for (Node<int>* current = iterator->GetCurrent; current != NULL; current = iterator->MoveNext){
		int distance = abs(diskArmLocation - current->Value);
		if (distance < minDistance){
			nodeWithMinimum = current;
			minDistance = distance;
		}
	}
	_sectors.DeleteMiddle[nodeWithMinimum];
	return nodeWithMinimum->Value;
}


int Queue::Count(){
	return _sectors.count;
}

bool Queue::IsEmpty() {
        return (_front == _back);
}

bool Queue::IsFull() {
        return (_back == _max - 1);
}