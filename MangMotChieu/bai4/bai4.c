#include <stdio.h>

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    
    int arr[n], max, min, max_index = 0, min_index = 0;
    printf("Nhap %d so nguyen:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (i == 0 || arr[i] > max) {
            max = arr[i];
            max_index = i;
        }
        if (i == 0 || arr[i] < min) {
            min = arr[i];
            min_index = i;
        }
    }

    printf("Gia tri lon nhat: %d o vi tri %d\n", max, max_index);
    printf("Gia tri nho nhat: %d o vi tri %d\n", min, min_index);
    return 0;
}
