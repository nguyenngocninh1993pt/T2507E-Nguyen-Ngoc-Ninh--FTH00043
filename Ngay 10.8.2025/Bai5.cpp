#include <stdio.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    long long int a = 0, b = 1, fib = 0;
	int i = 1;
    while (i <= n) {
        fib = a + b;
        a = b;
        b = fib;
        i++;
    }
    printf("F%d = %lld", n, a);
    return 0;
}

