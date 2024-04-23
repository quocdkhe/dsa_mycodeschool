// Stack - Linked List Implementation
#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	Node* next;
};

struct Node* head = NULL;

void push(int data){
	Node* node = new Node();
	node->data = data;
	node->next = NULL;
	if(head == NULL){
		head = node;
		return;
	}
	node->next = head;
	head = node;
}

void pop(){
	if(head == NULL){
		printf("Error: the stack is empty!");
		return;
	}
	Node* temp = head;
	head = head->next;
	free(temp);
}

int top(){
	if(head == NULL){
		printf("Error: the stack is empty");
		return 0;
	}
	return head->data;
}

// This function is to test the implementation of stack.
// This will print all the elements in the stack at any stage (print linked list reversely).
void print(Node* head){
	if(head == NULL){
		printf("Stack: ");
		return;
	}else{
		print(head->next);
	}
	printf("%d ",head->data);
}


int main(){
	push(2);print(head); printf("\n");
	push(5);print(head);printf("\n");
	push(10);print(head);printf("\n");
	pop();print(head);printf("\n");
	push(12);print(head);printf("\n");
	
}