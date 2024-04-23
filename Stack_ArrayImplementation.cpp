// Stack - Array based implementation. 
// Creating a stack of integers. 
#include<stdio.h>
#define MAX_SIZE 101

int A[MAX_SIZE]; // integer array to store the stack 
int size = -1;  // variable to mark top of stack in array

// Push operation to insert an element on top of stack. 
void push(int x){
  if(size == MAX_SIZE -1) { // overflow case. 
		printf("Error: stack overflow\n");
		return;
	}
	A[++size] = x;
}

// Pop operation to remove an element from top of stack.
void pop(){
	if(size == -1) { // If stack is empty, pop should throw error. 
		printf("Error: No element to pop\n");
		return;
	}
	size--;
}

// Top operation to return element at top of stack. 
int top(){
	return A[size];
}

// This function will return 1 (true) if stack is empty, 0 (false) otherwise
int isEmpty(){
    if(size == -1) return 1;
    return 0;
}

// This function is to test the implementation of stack. 
// This will print all the elements in the stack at any stage. 
void print() {
	int i;
	printf("Stack: ");
	for(i = 0;i <= size; i++)
		printf("%d ",A[i]);
	printf("\n");
}

int main() {	
  // Code to test the implementation. 
  // calling print() after each push or pop to see the state of stack. 
	push(2);print();
	push(5);print();
	push(10);print();
	pop();print();
	push(12);print();
}