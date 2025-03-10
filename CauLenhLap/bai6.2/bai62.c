#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Nhap so n: ");
    scanf("%d", &n);
    for (int i = 1; i < n; i++) {
        if (n % i == 0) sum += i;
    }
    printf(n == sum ? "La so hoan hao\n" : "Khong la so hoan hao\n");
    return 0;
}
