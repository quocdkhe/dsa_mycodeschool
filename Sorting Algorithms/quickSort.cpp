#include<bits/stdc++.h>
using namespace std;
void printArr(int* arr, int n){
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
}

void enterArr(int* arr, int n){
	for(int i = 0; i < n; i++){
		scanf("%d",&arr[i]);
	}
}

int partition(int* A, int start, int end){
	int pivot = A[end];
	int pIndex = start; //set partition index as start initially
	for(int i = start; i < end; i++){
		if(A[i] <= pivot){
			swap(A[i],A[pIndex]); // swap if the element is lesser than pivot
			pIndex++;
		}
	}
	swap(A[pIndex],A[end]); // swap pivot with element at partition index
	return pIndex;
}

void quickSort(int* A, int start, int end){
	if(start < end){
		int pIndex = partition(A,start,end);
		quickSort(A,start,pIndex-1);
		quickSort(A,pIndex+1,end);
	}
}

int main(){
	int arr[50];
	int n;
	scanf("%d",&n);
	enterArr(arr,n);
	quickSort(arr,0,n-1);
	printf("Sorted array: ");
	printArr(arr,n);
	return 0;
	return 0;
}