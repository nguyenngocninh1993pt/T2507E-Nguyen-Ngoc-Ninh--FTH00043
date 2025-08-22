#include <stdio.h>

void printArray(int arr[], int size){
	for(int i=0; i<size; i++){
		printf("%d\t", arr[i]);
	}
}

void daoNguoc(int arr[], int n) {
    int left = 0, right = n - 1;
    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
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
	daoNguoc(arr,n);
	printf("\nMang sau khi dao nguoc:\n");
	printArray(arr,n);
}
