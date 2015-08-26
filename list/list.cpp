#include <iostream>
#include "list.h"
using namespace std;

List::~List() {
	for(Node *p; !isEmpty(); ) {
		p=head->next;
		delete head;
		head = p;
	}
}

void List::pushToHead(char el)
{
	head = new Node(el, head);
	if(tail==0)
	{
		tail = head;
	}
}
void List::pushToTail(char el)
{
	Node *tmp = new Node(el);
	if (head == 0)
	{
		tail = tmp;
		head = tmp;
	}
	else
	{
		tail->next = tmp;
		tail = tmp;
	}
}
char List::popHead()
{
	char el = head->data;
	Node *tmp = head;
	if(head == tail)
	{
		head = tail = 0;
	}
	else
	{
		head = head->next;
	}
	delete tmp;
	return el;
}
char List::popTail()
{
	if (tail == NULL)
	{
		return NULL;
	}
	
	else
	{
		char el = tail->data;
		Node *tmp = tail;
		if (head == tail) 
		{
			head = NULL;
			tail = NULL;
		}
		else
		{
			Node *Tail = head;
			while (Tail->next != tail)
				Tail = Tail->next;
			tail = Tail;
			tail->next = NULL;
		}
		delete tmp;
		
	}
}
bool List::search(char el)
{
	Node *tmp = head;
	while (tmp != tail)
	{
		if (tmp->data == el)
			return true;
		tmp = tmp->next;
	}
	// TO DO! (Function to return True or False depending if a character is in the list.
	return false;
}
void List::reverse()
{
		if (head != NULL) 
		{	if (head != tail)
			{
			Node *prev = NULL, *n = NULL, *current;
			current = head;
			while (current != NULL) 
			{
				if (current->next == NULL)
				{
					tail = head;
				}
				n = current->next;
				current->next = prev;
				prev = current;
				current = n;
			}
			head = prev;
			}
		}
	// TO DO! (Function is to reverse the order of elements in the list.
}

void List::print()
{
	if(head  == tail)
	{
		cout << head->data;
	}
	else
	{
		Node *tmp = head;
		while(tmp!=tail)
		{
			cout << tmp->data;
			tmp = tmp->next;
		}
		cout << tmp->data;
	}
}