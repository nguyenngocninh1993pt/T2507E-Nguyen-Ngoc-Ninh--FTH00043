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
	int sum = 0; 
	int best = 0;
	for(int i=0; i<n; i++){
		if(so[i]>0){
			sum+=so[i];
		}else{
			if(sum>best)
				best = sum;
			sum = 0;
		} 
	}
	if(sum>best)
		best = sum;
		printf("\nChuoi duong lien tiep co tong lon nhat la: %d", best);
}
