#include <stdio.h>
int main(){
	float a, b, x;
	printf("Nhap vao gia tri a, b: ");
	scanf("%f %f", &a, &b);
	printf("Gia tri a = %f, Gia tri b = %f\n", a, b);
	if(a == 0){
		if(b == 0){
			printf("Phuong trinh co vo so nghiem");
		}else{
			printf("Phuong trinh vo nghiem");
		}
	}else{
		x = -b/a;
		printf("Phuong trinh co nghiem duy nhat x = %f", x);
	}
}
