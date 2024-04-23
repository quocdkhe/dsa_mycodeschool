// Queue - Circular array implementation
#include<stdio.h>
#define MAX_SIZE 101
using namespace std;

int front =-1;
int rear  =-1;
int A[MAX_SIZE];
bool IsEmpty(){
	return (front == -1 && rear == -1); 
}
	// To check whether Queue is full or not
bool IsFull(){
	return (rear+1)%MAX_SIZE == front ? true : false;
}

	// Inserts an element in queue at rear end
void Enqueue(int x){
	if(IsFull()){
		printf("Error: Queue is Full\n");
		return;
	}
	
	if (IsEmpty()){ 
		front = rear = 0; 
	}
	else{
	    rear = (rear+1)%MAX_SIZE;
	}
	A[rear] = x;
}

	// Removes an element in Queue from front end. 
void Dequeue(){
	if(IsEmpty()){
		printf("Error: Queue is empty!\n");
		return;
	}
	else if(front == rear ){
		rear = front = -1;
	}
	else{
		front = (front+1)%MAX_SIZE;
	}
}
// Returns element at front of queue. 
int Front(){
	if(front == -1){
		printf("Error: cannot return front from empty queue\n");
		return -1; 
	}
	return A[front];
}
/* 
   Printing the elements in queue from front to rear. 
   This function is only to test the code. 
   This is not a standard function for Queue implementation. 
*/
void Print(){
	// Finding number of elements in queue  
	int count = (rear+ MAX_SIZE - front)%MAX_SIZE + 1;
	printf("Queue       : ");
	for(int i = 0; i <count; i++){
		int index = (front+i) % MAX_SIZE; // Index of element while travesing circularly from front
		printf("%d ", A[index]);
	}
	printf("\n");
}

int main(){
	Enqueue(5); Print();
	Enqueue(6); Print();
	Enqueue(7); Print();
	Enqueue(8); Print();
	Enqueue(9); Print();
	Dequeue(); Print();
	Enqueue(10); Print();
	return 0;
}