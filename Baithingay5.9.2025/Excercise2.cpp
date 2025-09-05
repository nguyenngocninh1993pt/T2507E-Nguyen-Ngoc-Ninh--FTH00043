#include <stdio.h>

int isPrime(int n) {
    if (n < 2) {
        return 0; 
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1; 
}
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
    	printf("Enter element %d: \n", i+1);
        scanf("%d", &arr[i]);
    }

    int foundPrime = 0;
    printf("Prime numbers in the array: ");
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            printf("%d ", arr[i]);
            foundPrime = 1;
        }
    }

    if (foundPrime==0) {
        printf("\nNo prime number");
    }

    return 0;
}

