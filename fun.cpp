#include"Header.h"
#include<iostream>

using namespace std;

void insert_node(node **head,int dat){
	node *ptr = (node*)malloc(sizeof(node));
	ptr->data = dat;
	ptr->next = 0;
	if (*head== 0){
		*head = ptr;
	}
	else{
		node *curr = *head;
		while (curr->next != 0)
			curr = curr->next;
		curr->next = ptr;
	}
}

void traverse(node **head){
	node *curr = *head;
	while (curr != 0){
		cout << "linklist elements are: " <<curr->data<< endl;
		curr = curr->next;
	}
}

void delete_node(node **head){
	node *curr = *head;
	if (curr->next == 0){
		int info = curr->data;
		*head = 0;
		cout << "deleted node info : " << info << endl;
	}
	else{
		while (curr->next->next != 0)
			curr = curr->next;
		int info = curr->next->data;
		curr->next = 0;
		cout << "deleted node info: " << info << endl;
	}
}

void add_after_parti_node(node **head,int dat, int pos){
	node *curr = *head;
	node *ptr = (node*)malloc(sizeof(node));
	ptr->data = dat;
	ptr->next = 0;
	if (pos == 0){
		ptr->next = *head;
		*head = ptr;
	}
	else{
		int flag = 0;
		while ((curr != 0)){
			//cout << curr->data;
			//prv = curr;
			if (curr->data == pos){
				flag++;
				ptr->next = curr->next;
				curr->next = ptr;
				curr = curr->next;
			}
			curr = curr->next;
		}
		if (flag == 0){
			cout << dat << "  " << "node not existed" << endl;
		}
	}
}

	