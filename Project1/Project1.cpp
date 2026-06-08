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

	clsDblLinkedList<int>::Node* N1 = MyDblLinkedList.Find(2);

    if (N1 != NULL)
        cout << "\n" << "Node with value 2 is Found : -)" << "\n";
    else
        cout << "\n" << "Node with value 2 is Not Found : -(" << "\n";

    MyDblLinkedList.InsertAfter(N1, 500);
    cout << "\n" << "After Inserting 500 after 2:" << "\n";
    MyDblLinkedList.PrintList();

    MyDblLinkedList.InserAtEnd(700);
    cout << "\n" << "After Inserting 700 at End:" << "\n";
    MyDblLinkedList.PrintList();

    clsDblLinkedList<int>::Node* N2 = MyDblLinkedList.Find(4);
    MyDblLinkedList.DeleteNode(N2);
    cout << "\n" << "After Deleting 4:" << "\n";
    MyDblLinkedList.PrintList();

    MyDblLinkedList.DeleteFirstNode();
    cout << "\n" << "After Deleting First Node:" << "\n";
    MyDblLinkedList.PrintList();

    MyDblLinkedList.DeleteLastNode();
    cout << "\n" << "After Deleting Last Node:" << "\n";
    MyDblLinkedList.PrintList();

    system("pause>0");
}
