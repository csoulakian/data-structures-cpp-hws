#include "DoublyLinkedList.h"
#include "DoublyLinkedListIterator.h"
#include <iostream>



using namespace std;

class PriorityQueue
{
public:
        PriorityQueue(int sector);
        ~PriorityQueue();

        void Enqueue(int sector);
        int Dequeue(int diskArmLocation);
        bool IsEmpty();
        bool IsFull();

        void Print();

private:
	DoublyLinkedList<int> _sectors;
	int _max;
	int* _items;
	int _front;
	int _back;

};