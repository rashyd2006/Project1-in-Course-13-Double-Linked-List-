// Project1

#include <iostream>
#include "clsDblLinkedList.h"
using namespace std;


int main()
{
    clsDblLinkedList <int> MyDblLinkedList;

    MyDblLinkedList.InsertAtBeginning(5);
    MyDblLinkedList.InsertAtBeginning(4);
    MyDblLinkedList.InsertAtBeginning(3);
    MyDblLinkedList.InsertAtBeginning(2);
    MyDblLinkedList.InsertAtBeginning(1);

    cout << "\n" << "Linked List Content: " << "\n";
    MyDblLinkedList.PrintList();

    MyDblLinkedList.InsertAfter(6, 500);

    cout << "\n" << "After Insert : " << "\n";
    MyDblLinkedList.PrintList();

    system("pause>0");
}