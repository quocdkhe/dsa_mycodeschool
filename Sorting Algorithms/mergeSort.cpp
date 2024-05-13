#include<stdio.h>
#include<stdlib.h>
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


void merge(int* L, int nL, int* R, int nR, int* A){
	int i, j ,k;
	i = j = k = 0;
	while(i < nL && j < nR){
		if(L[i] <= R[j]){
			A[k++] = L[i++];
		}else{
			A[k++] = R[j++];
		}
	}
	while(i < nL) A[k++] = L[i++];
	while(j < nR) A[k++] = R[j++];
}

void mergeSort(int* A, int n){
	if(n == 1){
		return;
	}
	int mid = n/2;
	int* left = (int*)malloc(mid*sizeof(int));
	int* right = (int*)malloc((n-mid)*sizeof(int));
	for(int i = 0; i < mid; i++){
		left[i] = A[i];
	}
	for(int i = mid; i < n; i++){
		right[i-mid] = A[i];
	}
	mergeSort(left,mid);
	mergeSort(right,n-mid);
	merge(left, mid, right, n-mid, A);
	free(left);
	free(right);
}


int main(){
	int arr[1001];
	int n;
	scanf("%d",&n);
	enterArr(arr,n);
	mergeSort(arr,n);
	printf("Sorted array: ");
	printArr(arr,n);
	return 0;
}