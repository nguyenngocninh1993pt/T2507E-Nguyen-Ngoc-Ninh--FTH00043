#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	int so[n];
	for(int i = 0; i<n; i++){
		printf("Nhap vao phan tu thu %d: ", i+1);
		scanf("%d", &so[i]);}
	int max = abs(so[0]);
	for(int i =1; i<n; i++){// gan gia tri = 0 roi thi de toi uu nen chay tu i = 1,
		if(abs(so[i])>max){
			max = abs(so[i]);
			}
	}
	printf("Mang se duoc bao phu trong doan [%d; %d]", -max, max);
}
