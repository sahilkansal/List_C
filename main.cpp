#include<iostream>
#include"Header.h"
using namespace std;

int main(){
	node *head1=0;
	node **head;
	head= &head1;
	//cout << sizeof(node*);
	insert_node(&head1,1);
	insert_node(head, 2);
	//insert_node(head, 2);
//	delete_node(head);
	add_after_parti_node(head,2,2);
	traverse(head);
	cin.get();
}
