#include <stdio.h>

double power(double x, int y) {
    double result = 1;
    for (int i = 0; i < y; i++) {
        result *= x;
    }
    return result;
}

int main() {
    double x;
    int y;
    printf("Nhap x va y\n");
    scanf("%lf %d", &x, &y);
    printf("Gia tri x mu y la %.2lf\n", power(x, y));
    return 0;
}
