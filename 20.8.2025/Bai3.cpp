#include <stdio.h>

int ucln, bcnn; 
int timUCLN(int a, int b){
	int min;
	if(a<b)
		min =a; 
	else
		min =b; 
	for(int i = min; i>=1; i--){
		if(a%i==0 && b%i==0){
			ucln = i;
			break;
		}
	}
	return ucln;
}
int timBCNN (int a, int b){
	bcnn = (a*b)/ucln;
}
int main(){
	int x, y; 
	printf("Nhap vao so x: ");
	scanf("%d", &x);
	printf("Nhap vao so y: ");
	scanf("%d", &y);
	ucln = timUCLN(x,y); 
	printf("UCLN la: %d\n", ucln);
	bcnn = timBCNN(x,y);
	printf("BCNN la: %d\n", bcnn);
}

