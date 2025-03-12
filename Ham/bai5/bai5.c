#include <stdio.h>

void doiCoSo(int n, int base) {
    char str[32];
    int i = 0;
    while (n > 0) {
        int du = n % base;
        if (du < 10) str[i++] = du + '0';
        else str[i++] = du - 10 + 'A';
        n /= base;
    }
    for (int j = i - 1; j >= 0; j--) printf("%c", str[j]);
}

int main() {
    int n;
    printf("Nhap so nguyen duong\n");
    scanf("%d", &n);

    printf("Co so 2 la ");
    doiCoSo(n, 2);
    printf("\n");

    printf("Co so 8 la ");
    doiCoSo(n, 8);
    printf("\n");

    printf("Co so 16 la ");
    doiCoSo(n, 16);
    printf("\n");

    return 0;
}
