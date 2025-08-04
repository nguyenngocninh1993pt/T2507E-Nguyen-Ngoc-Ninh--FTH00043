#include <stdio.h>
#include <math.h>
int main(){
	float a, b, c, x, r, x1, x2;
	printf("Nhap vao gia tri a, b, c: ");
	scanf("%f %f %f", &a, &b, &c);
	printf("Gia tri cua a = %f, b= %f, c= %f\n", a, b, c);
	if(a == 0){
		if(b == 0){
			if(c == 0){
				printf("Phuong trinh co vo so nghiem");
			}else{
				printf("Phuong trinh vo nghiem");
			}
		}else{
			x = -c/b;
			printf("Phuong trinh co nghiem duy nhat la x = %f", x);
		}
	}else{
		r = b*b- 4*a*c;
		if(r < 0){
			printf("Phuong trinh vo nghiem");
		}else{
			if(r == 0){
				x1 = x2 = -b/(2*a);
				printf("Phuong trinh co nghiem kep x1 = x2 = %f", x1, x2);
			}else{
				x1 = (-b-sqrt(r))/(2*a);
				x2 = (-b+sqrt(r))/(2*a);
				printf("Phuong trinh co 2 nghiem phan biet x1= %f; x2 =%f", x1, x2);
			}
		}
	}
}
