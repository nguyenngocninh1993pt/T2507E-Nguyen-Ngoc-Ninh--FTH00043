#include <stdio.h>

void printArray(int arr[], int size){
	for(int i=0; i<size; i++){
		printf("%d\t", arr[i]);
	}
}
void tangDan(int arr[], int size){
	for(int i=0; i<size-1; i++){
		for(int j=0; j<size-1-i; j++){
			if(arr[j]>arr[j+1]){// sap xep tang dan, giam dan thi nguoc lai arr[j] <arr[j+1]
				int tempt = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tempt;
			}
		}
	}
}
int main(){
	int n; 
	printf("Nhap kich thuoc mang: ");
	scanf("%d", &n);
	int arr[n];
	for(int i=0; i<n; i++){
	printf("Nhap vao phan tu thu %d: ", i+1);
	scanf("%d", &arr[i]);
	}
	printf("Mang vua nhap vao la:\n");
	printArray(arr,n);
	tangDan(arr,n);
	printf("\nSap xep mang theo thu tu tang dan:\n");
	printArray(arr,n);
}
