#include <stdio.h>
#include <stdlib.h>
int main(){
	int a;
	printf("Nhap vao so nguyen a: ");
	scanf("%d", &a);
	int b;
	printf("Nhap vao so nguyen b: ");
	scanf("%d", &b);
	if(abs(a-10)>abs(b-10))
		printf("So gan 10 hon la: %d", b);
	else if(abs(a-10)==abs(b-10))
			printf("Bang nhau");
		else printf("So gan 10 hon la: %d", a);			
}
