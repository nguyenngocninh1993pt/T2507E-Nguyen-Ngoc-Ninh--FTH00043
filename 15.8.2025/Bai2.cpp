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
	int cosole = 0; //Chua tim duoc so le
		for(int i=0; i<n; i+=2){
				if(so[i]%2!=0){
				sum = sum + so[i];
				count++;
				cosole = 1;
		}
	}
	if (cosole==1)
		printf("Trung binh cong cua cac so le o vi tri chan (i = 0, 2, 4...) trong mang la: %d", sum/count);
	else 
		printf("Khong co so le o vi tri chan trong mang");
}

