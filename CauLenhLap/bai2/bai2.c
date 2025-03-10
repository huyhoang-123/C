#include <stdio.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    printf("Nhap so can kiem tra: ");
    scanf("%d", &n);
    printf(isPrime(n) ? "La so nguyen to\n" : "Khong la so nguyen to\n");
    return 0;
}
