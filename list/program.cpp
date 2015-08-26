#include <iostream>
#include "list.h"
using namespace std;

void main()
{
	//Sample Code
	List mylist;
	mylist.pushToHead('k');
	mylist.pushToHead('e');
	mylist.pushToHead('n');
	mylist.pushToTail('k');
	mylist.pushToTail('e');
	mylist.pushToTail('n');
	mylist.reverse();
	mylist.search('k');
	mylist.popHead();
	mylist.popTail();
	mylist.print();

	//TO DO! Write a program that tests your list library - the code should take characters, push them onto a list, 
	//- then reverse the list to see if it is a palindrome!
	
}