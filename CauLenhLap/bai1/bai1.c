#include <stdio.h>

int main() {
    int sum = 0, num;
    for (int i = 0; i < 10; i++) {
        printf("Nhap so thu %d: ", i + 1);
        scanf("%d", &num);
        sum += num;
    }
    printf("Tong = %d\n", sum);
    return 0;
}
