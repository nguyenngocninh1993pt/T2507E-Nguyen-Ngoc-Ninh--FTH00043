#include <stdio.h>
int main(){
	int n; 
	printf("Nhap vao so nguyen n: ");
	scanf("%d", &n);
	printf("Cac so le thoa man la: ");
	int i = 1;
	while (i<n){
		i++;
		printf("%d ", i);
	}
}
