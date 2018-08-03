#C++ Program for Linked List Representation of Linear Queue

#include<iostream.h>
#include<stdlib.h>
using namespace std;
struct node {
	int
	data;
	struct
	node *next;
}
*front=NULL,*rear,*temp;
void ins() {
	temp=new
	node;
	cout<<�Enter
	data:�;
	cin>>temp->data;
	temp->next=NULL;
	if(front==NULL)
	   front=rear=temp; 
        else {
	    rear->next=temp;
    rear=temp;
	}
	cout<<�Node
	has been insertedn�;
}
void del() {
	if(front==NULL)
	                                cout<<�Queue
	is emptyn�; else {
		temp=front;
		front=front->next;
		cout<<�Deleted
		node is �<<temp->data<<�n�;
		delete(temp);
	}
}
void dis() {
	if(front==NULL)
	                                cout<<�Queue
	is emptyn�; else {
		temp=front;
		while(temp->next!=NULL) {
			cout<<temp->data<<�->�;
			temp=temp->next;
		}
		cout<<temp->data;
	}
}
main() {
	int ch;
	while(1) {
		cout<<�n***
		Menu ***�<<�n1.Insertn2.Deleten3.Displayn4.Exit�;
		cout<<�nnEnter
		your choice(1-4):�;
		cin>>ch;
		cout<<�n�;
		switch(ch) {
			case
			1:  ins();
			break;
			case
			2: del();
			break;
			case
			3: dis();
			break;
			case
			4: exit(0);
			break;
			default:
			cout<<�Wrong Choice!!!�;
		}
	}
	return
	0;
}
