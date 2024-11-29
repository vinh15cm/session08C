#include <stdio.h>

int main() {
    // Khai bao va gan gia tri cho ma tran vuong
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int n = 4;  // Kich thuoc ma tran vuong (4x4)
    int sum = 0;

    printf("Cac phan tu tren duong cheo chinh cua ma tran la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i][i]);  // Phan tu tren duong cheo chinh la arr[i][i]
        sum += arr[i][i];          // Tinh tong cac phan tu tren duong cheo chinh
    }

    // In tong cac phan tu tren duong cheo chinh
    printf("\nTong cac phan tu tren duong cheo chinh la: %d\n", sum);

    return 0;
}

