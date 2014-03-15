#pragma once

#include <iostream>
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

private:
        int _max;
        int* _items;
        int _front;
        int _back;
};