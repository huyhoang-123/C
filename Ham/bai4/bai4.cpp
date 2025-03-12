#include <stdio.h>

void nhapMaTran(int a[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
}

void inMaTran(int a[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}

void tongMaTran(int a[3][3], int b[3][3], int c[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            c[i][j] = a[i][j] + b[i][j];
}

void tichMaTran(int a[3][3], int b[3][3], int c[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            c[i][j] = 0;
            for (int k = 0; k < 3; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
}

int main() {
    int A[3][3], B[3][3], C[3][3];
    printf("Nhap ma tran A\n");
    nhapMaTran(A);
    printf("Nhap ma tran B\n");
    nhapMaTran(B);

    tongMaTran(A, B, C);
    printf("Tong hai ma tran\n");
    inMaTran(C);

    tichMaTran(A, B, C);
    printf("Tich hai ma tran\n");
    inMaTran(C);

    return 0;
}
