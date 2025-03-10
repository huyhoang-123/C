#include <stdio.h>

int main() {
    int n, sum = 0, sum_pos = 0, sum_neg = 0, count_pos = 0, count_neg = 0;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Nhap %d so nguyen:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
        if (arr[i] > 0) {
            sum_pos += arr[i];
            count_pos++;
        } else if (arr[i] < 0) {
            sum_neg += arr[i];
            count_neg++;
        }
    }

    printf("Tong cac phan tu: %d\n", sum);
    printf("Tong so duong: %d\n", sum_pos);
    printf("Tong so am: %d\n", sum_neg);
    printf("Trung binh cong: %.2f\n", (float)sum / n);
    if (count_pos > 0) printf("Trung binh so duong: %.2f\n", (float)sum_pos / count_pos);
    if (count_neg > 0) printf("Trung binh so am: %.2f\n", (float)sum_neg / count_neg);

    return 0;
}
