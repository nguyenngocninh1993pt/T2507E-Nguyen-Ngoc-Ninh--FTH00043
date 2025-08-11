#include <stdio.h>
int main (){
	int n;
	printf("Nhap vao so n: ");
	scanf("%d", &n);
	long long int a = 0;
	long long int b = 1;
	long long fib = 0;
	while (fib<=n){
		fib = a + b;
	if(fib>n){
		break;
	} 
	a = b; 
	b = fib;
	}
	printf("So tiem can duoi cua n trong day Fibonacci la: %d", b);
}
