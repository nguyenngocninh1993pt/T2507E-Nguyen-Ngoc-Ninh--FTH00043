#include <stdio.h>
int main(){
	int a;
	printf("Nhap vao gia tri cua a (0-9): ");
	scanf("%d", &a);
	if (a==0)
		printf("Khong");
	else if (a==1)
		printf("Mot");
	else if(a==2)
		printf("Hai");
	else if(a==3)
	    printf("Ba");
	else if(a==4)
		printf("Bon");
	else if(a==5)
		printf("Nam");
	else if(a==6)
		printf("Sau");
	else if(a==7)
		printf("Bay");
	else if(a==8)
		printf("Tam");
    else printf("Chin");
}
