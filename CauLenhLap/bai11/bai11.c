#include <stdio.h>

int main() {
    int n;
    printf("Nhap so nguyen: ");
    scanf("%d", &n);
    printf("So nhi phan: ");
    for (int i = 31; i >= 0; i--) printf("%d", (n >> i) & 1);
    printf("\n");
    return 0;
}
