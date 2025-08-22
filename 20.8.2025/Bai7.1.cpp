#include <stdio.h>

void printArray(int arr[], int size){
	for(int i=0; i<size; i++){
		printf("%d\t", arr[i]);
	}
}
int timMax(int arr[], int size){
	int max= arr[0];
	for(int i=0; i<size; i++){
		if(arr[i]>max)
			max = arr[i];
	}
		return max; 
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
	int max= timMax(arr,n);
	printf("\nGia tri lon nhat trong mang la: %d\n", max);
}
