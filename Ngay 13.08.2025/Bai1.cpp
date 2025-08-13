#include <stdio.h>
int main(){
	int n;
	printf("Nhap vao so n: ");
	scanf("%d", &n);
	int sum = 0;
	for(int i=1; i<=n; i++){
		if(n%i==0)
			sum+=i;
	}
	printf("Tong cac uoc cua %d la: %d", n, sum);
}
