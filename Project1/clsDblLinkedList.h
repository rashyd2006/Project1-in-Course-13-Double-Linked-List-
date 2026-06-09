#pragma once

#include <iostream>
using namespace std;

template <class T>
class clsDblLinkedList
{

protected:
	int _Size = 0;

public:

	class Node
	{
	public:
		T value;
		Node* next;
		Node* prev;
	};

	Node* head;
	
	clsDblLinkedList()
	{
		head = NULL;
	};

	void InsertAtBeginning(T value)
	{
		Node* new_node = new Node();
		new_node->value = value;
		new_node->next = head;
		new_node->prev = NULL;
		if(head != NULL)
			head->prev = new_node;
		head = new_node;
		_Size++;
	}
	
	void InsertAfter(Node* current, T Value)
	{
		Node* new_node = new Node();
		new_node->value = Value;
		new_node->next = current->next;
		new_node->prev = current;
		if (current->next != NULL)
			current->next->prev = new_node;
		current->next = new_node;
		_Size++;
	}
	
	void InserAtEnd(T value)
	{
		Node* new_node = new Node();
		new_node->value = value;
		new_node->next = NULL;

		if (head == NULL)
		{
			new_node->prev = NULL;
			head = new_node;
		}

		Node* current = head;
		while (current->next != NULL)
			current = current->next;

		current->next = new_node;
		new_node->prev = current;
		_Size++;
	}
	
	Node* Find(T value)
	{
		Node* current = head;
		while (current != NULL)
		{
			if (current->value == value)
				return current;

			current = current->next;
		}

		return NULL;
	}

	void DeleteNode(Node * & DeleteToNode)
	{
		if (head == NULL || DeleteToNode == NULL)
			return;

		if (head  == DeleteToNode)
			head = DeleteToNode->next;

		if (DeleteToNode->next != NULL)
			DeleteToNode->next->prev = DeleteToNode->prev;

		if (DeleteToNode->prev != NULL)
			DeleteToNode->prev->next = DeleteToNode->next;

		delete DeleteToNode;
		_Size--;
	}

	void DeleteFirstNode()
	{
		if (head == NULL)
			return;
		
		Node* current = head;
		head = current->next;

		if (head != NULL)
			head->prev = NULL;

		delete current;
		_Size--;
	}

	void DeleteLastNode()
	{
		if (head == NULL)
			return;

		Node* current = head;
		while (current->next != NULL)
			current = current->next;

		current->prev->next = NULL;
		delete current;
		_Size--;
	}

	void PrintList()
	{
		Node* current = head;
		cout << "NULL <-> ";
		while (current != NULL)
		{
			cout << current->value << " <-> ";
			current = current->next;
		}

		cout << "NULL";
	}

	int Size()
	{
		return _Size;
	}

	bool IsEmpty()
	{
		return (_Size == 0 ? true : false);
	}

	void Clear()
	{
		Node* current;

		while (head != NULL)
		{
			current = head;
			head = head->next;
			delete current;
			_Size--;
		}

	}
};