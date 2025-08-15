#include <stdio.h>
int main(){
    int n;
    printf("Nhap vao gia tri so phan tu cua mang n = ");
    scanf("%d", &n);
    int so[n];
    for(int i=0; i<n; i++){
        printf("\nNhap vao gia tri phan tu thu %d: ", i+1);
        scanf("%d", &so[i]);
    }
    int found = 0; 
    int solecuoi;
    for(int i=n-1; i>=0; i--){
        if(so[i] % 2 != 0){
            solecuoi = so[i];
            found = 1;
            break; 
        }
    }

    if(found == 1)
        printf("So le cuoi cung cua mang la %d", solecuoi);
    else 
        printf("Khong co so le trong mang");
}

