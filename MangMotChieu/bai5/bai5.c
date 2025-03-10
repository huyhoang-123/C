#include <stdio.h>

int main() {
    int n, x, count = 0;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Nhap %d so nguyen:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Nhap x: ");
    scanf("%d", &x);
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) count++;
    }

    printf("So %d xuat hien %d lan trong mang.\n", x, count);
    return 0;
}
