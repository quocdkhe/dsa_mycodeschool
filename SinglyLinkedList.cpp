#include<stdio.h>
#include<stdlib.h>
#include<stack>
using namespace std;

struct Node{
	int data;
	Node* next;
};

struct Node* head = NULL;
struct Node* tail = NULL;
int size = 0;

Node* createNewNode(int data){
	Node* temp = new Node();
	temp->next = NULL;
	temp->data = data;
	return temp;
}

void insertNode(int data){
	Node* node = createNewNode(data);
	if(head == NULL){
		head = node;
	}else{
		tail->next = node;
	}
	size++;
	tail = node;
}

void insertAtHead(int data){
	Node* node = createNewNode(data);
	if(head == NULL){
		head = node;
	}else{
		node->next = head;
		head = node;
	}
	size++;
}

void insertAt(int data, int n){
	Node* temp = head;
	if(n == size){
		insertNode(data);
		return;
	}
	if(n == 1){
		insertAtHead(data);
		return;
	}
	for(int i = 0; i < n-2; i++){ // Go to (n-1)th node
		temp = temp->next;
	}
	Node* node = createNewNode(data);
	node->next = temp->next; // Build link to nth to n+1 node
	temp->next = node; // Build link n-1 node to nth node
	size++;
}

void print(){
	Node* temp = head;
	if(head == NULL){
		return;
	}
	while(temp != NULL){
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

void del(int n){
	Node* temp1 = head;
	if(n == 1){
		head = head->next;
		free(temp1);
		return;
	}
	// Traversing to n-1 node
	for(int i = 0; i < n-2; i++){
		temp1 = temp1->next;
	}
	Node* temp2 = temp1->next; // temp2 points to nth node
	temp1->next = temp2->next; // Go to (n+1)th node
	free(temp2);
	if(n == size){
		tail = temp1;
	}
	size--;
}

void reversePrint(Node* head){
	if(head == NULL){
		return;
	}else{
		reversePrint(head->next);
	}
	printf("%d ",head->data);
}

void reverse(){
	stack<Node*> S;
	Node* temp = head;
	while(temp != NULL){
		S.push(temp);
		temp = temp->next;
	}
	temp = S.top();
	head = temp;
	S.pop();
	while(!S.empty()){
		temp->next = S.top();
		temp = temp->next;
		S.pop();
	}
	temp->next = NULL;
	tail = temp;
}

int main(){
	insertNode(3);
	insertNode(4);
	insertNode(5);
	insertNode(6);
	reverse();
	print();
	insertAt(7,4);
	print();
	return 0;
}
