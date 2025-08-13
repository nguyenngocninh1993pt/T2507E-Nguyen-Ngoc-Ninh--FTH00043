#include <stdio.h>
int main(){
	int n; 
	printf("Nhap so nguyen duong n: ");
	scanf("%d", &n);
	int dv = 0;
	int tatcale = 1;
	for(;n!=0;n/=10){// muon giu nguyen gia tri ban dau cua n thi co the khai bao bien khac giu gtri cua n, vi du for (int tempt=n;tempt!=0; tempt/=10)
					// tempt = tempt/10; .....
		dv = n%10;
		if(dv%2==0){
			tatcale = 0;
			break;
		}
	}
	if(tatcale) 
		printf("Tat cac cac chu so deu la so le!");
	else 
		printf("Khong phai tat cac cac chu so deu la so le!");
}
