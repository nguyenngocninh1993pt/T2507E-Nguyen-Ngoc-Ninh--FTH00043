#include <stdio.h>
int main(){
	int n; 
	printf("Nhap vao so phan tu cua mang: ");
	scanf("%d", &n);
	int so[n];
	for(int i =0; i<n; i++){
		printf("Nhap vao so phan tu thu %d: ", i+1);
		scanf("%d", &so[i]);
	}
	int k; //so lan xoay
	printf("Nhap vao so phan tu xoay: ");
	scanf("%d", &k);
	for (int i=0; i<k; i++)
	{
           int temp = so[0];
           for(int j= 0; j<n-1;j++){
        	so[j] = so[j+1];
		   }
		    so[n-1] = temp;
        }
	printf("In ra cac phan tu cua mang: ");
	for(int i= 0; i<n; i++)
	printf("%d ", so[i]);
}
