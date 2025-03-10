#include <stdio.h>

int main() {
    int arr[10];
    printf("Nhap 10 so nguyen:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Mang vua nhap: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
