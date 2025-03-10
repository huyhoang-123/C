#include <stdio.h>

long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) result *= i;
    return result;
}

int main() {
    int n;
    double sum = 0.0;
    printf("Nhap N: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++) sum += 1.0 / factorial(i);
    printf("Tong S = %.6lf\n", sum);
    return 0;
}
