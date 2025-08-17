#include <stdio.h>
int main(){
	int n;
	printf("Nhap vao so phan tu mang: ");
	scanf("%d", &n);
	int so[n];
	for(int i =0; i<n; i++){
		printf("Nhap vao phan tu thu %d: ", i+1);
		scanf("%d", &so[i]);	
	}
	int max = so[0];
	for(int i =0; i<n; i++){
		if(so[i]>max){
			max = so[i]; 
		}
	} 
	int min = max; 
	for(int i =0; i<n; i++){
		if(so[i]<min){
			min = so[i];
		}
	}
	printf("Mang se duoc bao phu trong doan [%d; %d]", min, max);
}
