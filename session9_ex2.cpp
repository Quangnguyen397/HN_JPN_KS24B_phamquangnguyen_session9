#include <stdio.h>

int main() {
    int arr[100];
    int n, position, new_value;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Nhap gia tri cho phan tu arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Mang truoc khi sua: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Nhap vi tri can sua (0 den %d): ", n - 1);
    scanf("%d", &position);
    printf("Nhap gia tri moi: ");
    scanf("%d", &new_value);

    if (position < 0 || position >= n) {
        printf("Vi tri khong hop le!\n");
    } else {
        arr[position] = new_value;

        printf("Mang sau khi sua: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}

