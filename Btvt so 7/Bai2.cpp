#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	int x;
	printf("Nhap so nguyen x: ");
	scanf("%d", &x);
	int so[n];
	for(int i=0; i<n; i++){
		printf("Nhap phan tu thu %d: ", i+1);
		scanf("%d", &so[i]);
	}
	int kc = 0;
	int minkc = abs(so[0]-x);
	int soluong = 0;
	int kq[n];
	for(int i=0; i<n; i++){
		kc = abs(so[i]-x);
		if(kc<minkc){
			minkc = kc;
			soluong = 0;
			kq[soluong] = so[i];
			soluong++;
		}else if(kc==minkc){
			kq[soluong] = so[i];	
			soluong++;}
	}
	printf("Cac gia tri co khoang cach gan nhat so voi so %d là: ", x);
	for(int i= 0; i<soluong; i++){
		printf("%d ", kq[i]);
	}
}
