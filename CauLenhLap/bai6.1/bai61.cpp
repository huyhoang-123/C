#include <stdio.h>

int gcd(int a, int b) {
    while (b) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    printf("Nhap hai so: ");
    scanf("%d %d", &a, &b);
    printf("Uoc chung lon nhat: %d\n", gcd(a, b));
    printf("Boi chung nho nhat: %d\n", (a * b) / gcd(a, b));
    return 0;
}
