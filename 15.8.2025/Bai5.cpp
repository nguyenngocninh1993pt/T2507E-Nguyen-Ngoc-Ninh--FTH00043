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
	int min;
	int found = 0; // quy uoc found = 0 la chua tim thay so duong;
	for(int i=0; i<n; i++){
		if(so[i]>0){
			if(found==0){
				min = so[i];
				found = 1;
			}else if(so[i]<min)
				min = so[i];
		}
	}
	if(found == 1)
		printf("So duong nho nhat trong mang la: %d", min);
	else
		printf("Khong tim thay so duong");
}
