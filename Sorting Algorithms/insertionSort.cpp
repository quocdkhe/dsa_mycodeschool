#include<stdio.h>

void enterArr(int* arr, int n){
	for(int i = 0; i < n; i++){
		scanf("%d",&arr[i]);
	}
}

void printArr(int* arr, int n){
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
}


void insertionSort(int* arr, int n){
	for(int i = 1; i < n; i++){
		int value = arr[i];
		int hole = i;
		while(hole > 0 && arr[hole-1] > value){
			arr[hole] = arr[hole-1];
			hole--;
		}
		arr[hole] = value;
	}
}

int main(){
	int arr[50];
	int n;
	scanf("%d",&n);
	enterArr(arr,n);
	insertionSort(arr,n);
	printf("Sorted array: ");
	printArr(arr,n);
	return 0;
}