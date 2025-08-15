#include <stdio.h>
int main(){
	int n;
	printf("Nhap vao gia tri so phan tu cua mang n = ");
	scanf("%d", &n);
	int so[n];
	for(int i=0; i<n; i++){
	printf("\n Nhap vao gia tri phan tu thu %d: ", i+1);
	scanf("%d", &so[i]);
	}
	int sum = 0;
	int count = 0;
		for(int i=0; i<n; i++){
				if(so[i]%2!=0){
				sum = sum + so[i];
				count++;
		}
	}
	printf("Trung binh cong cua cac so le trong mang la: %d", sum/count);
}

