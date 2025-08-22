#include <stdio.h>

int timNghichdao(int a){
	int nd;
	for(nd=0; a!=0; a=a/10){
		int dv= a%10;
		nd = nd*10+dv;
	}
	return nd;
}

int main(){
	int n; 
	printf("Nhap vao so n: ");
	scanf("%d", &n);
	int kq= timNghichdao(n);
	printf("So nghich dao la: %d", kq);
}

