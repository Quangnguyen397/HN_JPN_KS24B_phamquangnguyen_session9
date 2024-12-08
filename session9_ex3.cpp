#include <stdio.h>

int main() {
    int arr[100];
    int n, position;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Nhap gia tri cho phan tu arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Mang truoc khi xoa: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Nhap vi tri can xoa (0 den %d): ", n - 1);
    scanf("%d", &position);

    if (position < 0 || position >= n) {
        printf("Vi tri khong hop le!\n");
    } else {
        for (int i = position; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;

        printf("Mang sau khi xoa: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}

