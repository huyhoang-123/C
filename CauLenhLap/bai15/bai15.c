#include <stdio.h>
#include <math.h>

int main() {
    double A, rate;
    int months;

    printf("Nhap so tien gui tiet kiem (A): ");
    scanf("%lf", &A);
    printf("Nhap lai suat moi thang (%%): ");
    scanf("%lf", &rate);
    printf("Nhap so thang gui tiet kiem: ");
    scanf("%d", &months);

    double final_amount = A * pow(1 + rate / 100, months);
    
    printf("Sau %d thang, so tien nhan duoc la: %.2lf\n", months, final_amount);
    return 0;
}
