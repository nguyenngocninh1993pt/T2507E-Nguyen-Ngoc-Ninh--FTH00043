#include <stdio.h>
int main(){
	int d;
	printf("Nhap vao gia tri ngay: ");
	scanf("%d", &d);
	int m;
	printf("Nhap vao gia tri thang: ");
	scanf("%d", &m);
	int y;
	printf("Nhap vao gia tri nam: ");
	scanf("%d", &y);
	int sn = d;
	if(m>1); sn = d + 31;
	if(m>2){	
		if((y%4==0 && y%100!=0)||(y%400==0))
		sn = sn + 28;
		else sn = sn+29;
	}
	if(m>3) sn = sn+31;
	if(m>4) sn = sn+30;
	if(m>5) sn = sn+31;
	if(m>6) sn = sn+30;
	if(m>7) sn = sn+31;
	if(m>8) sn = sn+31;
	if(m>9) sn = sn+30;
	if(m>10) sn = sn+31;
	if(m>11) sn = sn+30;
	printf("Ngay %d/%d/%d nhap vao la ngay thu %d trong nam", d, m, y, sn);
}
