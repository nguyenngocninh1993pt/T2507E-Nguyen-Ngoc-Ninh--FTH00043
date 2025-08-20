#include <stdio.h>
#include <math.h>

int tinhS(int a, int b){
	int S = 0; 
	S = pow(a,b);
}
int x, y;
int main(){
	printf("Nhap vao so x: ");
	scanf("%d", &x); 
	printf("Nhap vao so y: ");
	scanf("%d", &y);
	int kq = tinhS(x,y);
	printf("Ket qua cua S= %d", kq);
}
