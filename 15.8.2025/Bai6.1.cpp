#include <stdio.h>
int main(){
	int n;
	printf("Nhap vao so phan tu cua mang la: ");
	scanf("%d", &n);
	int so[n];
	for(int i=0; i<n; i++){
		printf("\nNhap vao phan tu thu %d: ", i+1);
		scanf("%d", &so[i]);
	}
	int count = 0; 
	int best = 0;
	for(int i=0; i<n; i++){
		if(so[i]>0){
			count++;
		}else{
			if(count>best)
				best = count;
			count = 0;
			// bi sai o day chu ý: khi mà so[i] trong mang am thi phai gan count = 0 de dem lai tu dau
			// neu khong gan count = 0 thi no se tiep tuc dem tiep tu cai count cu~ (giong bai tap dem tong so a[i] duong trong mang)
			// khong phai la dem so phan tu duong lien tiep.
		} 
	}
	if(count>best)
		best = count;
		printf("\nSo luong so duong lien tiep nhieu nhat la: %d", best);
	// truong hop vong lap chay het roi ma run = n, nhung best chi cap nhat khi so[i]<0
	//do do khi for chay vong lap den n, run= n nhung best chua cap nhat nen van ghi nhan gtri ban dau run = 0
	//nen phai them cau lenh if này truong hop chay het vong lap toan so duong thi khi do best = run = n
}
