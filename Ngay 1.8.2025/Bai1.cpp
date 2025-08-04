#include <stdio.h>
int main() {
    float diem;
    printf("Nhap vao diem so cua hoc sinh: ");
    scanf("%f", &diem);
    if(diem >= 9){
        printf("Hoc sinh xuat sac");
    }else{
        if(diem >= 8){
            printf("Hoc sinh gioi");
        }else{
            if(diem >= 6){
                printf("Hoc sinh kha");
            }else{
                if(diem >= 5){
                    printf("Hoc sinh trung binh");
                }else{
                    printf("Hoc sinh yeu");
                }
            }
        }
    }
}


