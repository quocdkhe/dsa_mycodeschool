#include<stdio.h>

void printArr(int* arr, int n){
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
}

void bubbleSort(int* arr, int n){
	for(int i = 0; i < n-1; i++){
		int isSwapped = 0;
		for(int j = 0; j < n - i - 1; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				isSwapped = 1;
			}
		}
		if(isSwapped == 0)
			break;
	}
}

void enterArr(int* arr, int n){
	for(int i = 0; i < n; i++){
		scanf("%d",&arr[i]);
	}
}

int main(){
	int arr[1001];
	int n;
	scanf("%d",&n);
	enterArr(arr,n);
	bubbleSort(arr,n);
	printf("Sorted array: ");
	printArr(arr,n);
	return 0;
}
