#include <stdio.h>

void printArray(int arr[], int size){
	for(int i=0; i<size; i++){
		printf("%d\t", arr[i]);
	}
}
int timMin(int arr[], int size){
	int min = arr[0];
	for(int i=0; i<size; i++){
		if(arr[i]<min)
			min = arr[i];
	}
		return min;
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
	int min = timMin(arr,n);
	printf("\nGia tri nho nhat trong mang la: %d\n", min);
}
