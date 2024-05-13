#include<stdio.h>

void print(int* arr, int n){
	for(int i = 0; i < n; i++){
		printf("%d ",arr[i]);
	}
}

void selectionSort(int* arr, int n){
	for(int i = 0; i < n-1; i++){ // Do that from 0 to n-2 
		int minIndex = i;
		for(int j = i + 1; j < n; j++){ // elements from i to n-1 are candidates
			if(arr[j] < arr[minIndex]){
				minIndex = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[minIndex];
		arr[minIndex] = temp;
		printf("Pass %d: ",i);
		print(arr,6);
		printf("\n");
	}	
}

int main(){
	int arr[] = {2,4,7,1,5,3};
	selectionSort(arr,6);
	printf("Sorted: ");
	print(arr,6);
	return 0;
}