#include <stdio.h>

int main() {
    double gdp, growth_rate;
    int year = 2014;
    
    printf("Nhap GDP nam 2014 (ty USD): ");
    scanf("%lf", &gdp);
    printf("Nhap toc do tang truong kinh te (%%): ");
    scanf("%lf", &growth_rate);

    double target_gdp = gdp * 2; // M?c GDP c?n d?t
    while (gdp <= target_gdp) {
        printf("Nam %d: %.2lf\n", year, gdp);
        gdp *= (1 + growth_rate / 100.0); // C?p nh?t GDP theo t? l? tang tru?ng
        year++;
    }

    printf("Cho den nam %d thi GDP vuot qua 2 lan GDP nam 2014.\n", year);
    return 0;
}
