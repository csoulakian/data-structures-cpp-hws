// NewHW3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "LinkedList.h"
#include "Iterator.h"
#include <iostream>
#include "Queue.h"

using namespace std;


//Testing Queue
int _tmain(int argc, _TCHAR* argv[])
{
	Queue q(4);

    q.Enqueue(1);
    q.Enqueue(2);
    q.Enqueue(3);

    q.Print();

    cout << q.Dequeue() << endl << endl;

    q.Print();

    cout << q.Dequeue() << endl << endl;

    q.Print();

    cout << q.Dequeue() << endl << endl;

    q.Print();

	cout << q.Dequeue() << endl << endl;
	return 0;

}

// Testing LinkedList
//void PrintList(LinkedList<int>* list);
//
//int _tmain(int argc, _TCHAR* argv[])
//{
//	LinkedList<int>* list = new LinkedList<int>();
//
//    list->AddEnd(1);
//    list->AddEnd(2);
//    list->AddEnd(3);
//    list->AddEnd(4);
//    list->AddEnd(5);
//
//    PrintList(list);
//
//    system("pause");
//
//	return 0;
//}
//
//void PrintList(LinkedList<int>* list) {
//        LinkedListIterator<int>* iterator = list->CreateIterator();
//        while (iterator->MoveNext()) {
//                int value = iterator->GetCurrent();
//                cout << value << ", ";
//        }
//        cout << endl;
//}