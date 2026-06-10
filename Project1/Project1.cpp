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

    clsDblLinkedList <int>::Node* N;

    N = MyDblLinkedList.GetNode(2);

    cout << "\n" << "Node value is: " << N->value;

    system("pause>0");
}