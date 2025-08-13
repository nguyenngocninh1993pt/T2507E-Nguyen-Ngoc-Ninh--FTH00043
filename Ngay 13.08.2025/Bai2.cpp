#include <stdio.h>

int main() {
    int a, b, min, ucln, bcnn;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);

    // Buoc 1: Tìm so nho hon
    if (a < b)
        min = a;
    else
        min = b;

    // Buoc 2: Tìm UCLN bang vòng lap
    for (int i = min; i >= 1; i--) {
        if (a % i == 0 && b % i == 0) {
            ucln = i;
            break;
        }
    }

    // Buoc 3: Tìm BCNN
    bcnn = (a * b) / ucln;

    // Ket qua
    printf("UCLN = %d\n", ucln);
    printf("BCNN = %d\n", bcnn);

    return 0;
}

