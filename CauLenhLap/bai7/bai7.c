#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    printf("Nhap N: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) sum += 1.0 / i;
    printf("Tong S = %.6lf\n", sum);
    return 0;
}
