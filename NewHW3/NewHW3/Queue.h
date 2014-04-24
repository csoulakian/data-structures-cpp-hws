#pragma once

#include <iostream>
#include "LinkedList.h"
using namespace std;

class Queue
{
public:
        Queue(int max);
        ~Queue();

        void Enqueue(int item);
        int Dequeue();
        bool IsEmpty();
        bool IsFull();

        void Print();

		LinkedList<int> _sectors;
		
		//New constructors for Enqueue and Dequeue
		void Enqueue(int sector);
		int Dequeue(int diskArmLocation);
		int Count();


private:
        int _max;
        int* _items;
        int _front;
        int _back;
};