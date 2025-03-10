#include <stdio.h>

int main() {
    int n;
    printf("Nhap so n: ");
    scanf("%d", &n);
    printf("Cac uoc so cua %d: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
