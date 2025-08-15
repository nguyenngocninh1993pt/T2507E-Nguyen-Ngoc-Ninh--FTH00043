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
	int x; 
	printf("Nhap vao so x: ");
	scanf("%d", &x);
	int found = 0;//Chua tim duoc x thuoc mang
		for(int i=0; i<n; i++){
				if(x == so[i]){
				found = 1;
				break;//break này phai nam trong if, neu khong thi no se hieu là break cua vong lap, no se chi chay 1 lan va break luon >> sai
		}
	}
	if(found==1)
		printf("x thuoc mang!");
	else 
		printf("x khong thuoc mang!");
}

