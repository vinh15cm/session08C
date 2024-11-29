#include <stdio.h>

int main() {
    int n;

    printf("Nhap vao mot so nguyen de tao ma tran vuong: ");
    scanf("%d", &n);

    int matrix[n][n];  

    printf("Nhap cac phan tu cho ma tran %d x %d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nhap phan tu matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Ma tran vuong vua nhap la:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

