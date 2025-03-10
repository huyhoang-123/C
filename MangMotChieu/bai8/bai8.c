#include <stdio.h>

void mergeSortedArrays(int a[], int n, int b[], int m, int merged[]) {
    int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        if (a[i] < b[j]) {
            merged[k++] = a[i++];
        } else {
            merged[k++] = b[j++];
        }
    }
    while (i < n) merged[k++] = a[i++];
    while (j < m) merged[k++] = b[j++];
}

int main() {
    int n, m;
    printf("Nhap so phan tu mang 1: ");
    scanf("%d", &n);
    int a[n];
    printf("Nhap mang 1 da sap xep: ");
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Nhap so phan tu mang 2: ");
    scanf("%d", &m);
    int b[m];
    printf("Nhap mang 2 da sap xep: ");
    for (int i = 0; i < m; i++) scanf("%d", &b[i]);

    int merged[n + m];
    mergeSortedArrays(a, n, b, m, merged);

    printf("Mang sau khi ghep: ");
    for (int i = 0; i < n + m; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    return 0;
}
