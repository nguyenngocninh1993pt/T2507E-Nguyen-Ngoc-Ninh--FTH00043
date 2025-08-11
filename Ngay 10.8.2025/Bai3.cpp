#include <stdio.h>
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	int i = 1; 
	int sum = 0; 
	while(i<=n-1){
		if(n%i==0){
			sum = sum + i;
		}
		i = i+1;
	}
	if(sum== n) printf("So hoan hao");
	else printf("So khong hoan hao");
}
