#include <stdio.h>

int main() {
    // Khai bao va gan gia tri cho mang 2 chieu
    int arr[3][3] = {
        {10, 20, 30},
        {5, 25, 35},
        {15, 40, 50}
    };

    int max = arr[0][0];  // Khoi tao max la phan tu dau tien trong mang

    // Duyet qua tung phan tu de tim gia tri lon nhat
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    // In ra phan tu lon nhat
    printf("Phan tu lon nhat trong mang la: %d\n", max);

    return 0;
}

