// Project1

#include <iostream>
#include "clsDblLinkedList.h"
using namespace std;


int main()
{
    clsDblLinkedList <int> MyDblLinkedList;

    if (MyDblLinkedList.IsEmpty())
        cout << "\n\n" << "Yes List is Empty. " << "\n";
    else
        cout << "\n\n" << "No List is not Empty. " << "\n";

    MyDblLinkedList.InsertAtBeginning(5);
    MyDblLinkedList.InsertAtBeginning(4);
    MyDblLinkedList.InsertAtBeginning(3);
    MyDblLinkedList.InsertAtBeginning(2);
    MyDblLinkedList.InsertAtBeginning(1);

    cout << "\n" << "Linked List Content: " << "\n";
    MyDblLinkedList.PrintList();

    cout << "\n" << "Number of items in the linked list = " << MyDblLinkedList.Size();

    if (MyDblLinkedList.IsEmpty())
        cout << "\n\n" << "Yes List is Empty. " << "\n";
    else
        cout << "\n\n" << "No List is not Empty. " << "\n";

    system("pause>0");
}
