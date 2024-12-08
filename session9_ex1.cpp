#include <stdio.h>

int main() {
    int arr[100];
    int n, value, position;

    printf("nhap so phan tu cu mang: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Nhap giá tri cho phan tu arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Mang truoc khi them phan tu: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Nhap gia tri muon them: ");
    scanf("%d", &value);
    printf("Nhap vi trí muon thêm (0 ð?n %d): ", n);
    scanf("%d", &position);
    if (position < 0 || position > n) {
        printf("Vi tri không hop li!\n");
    } else {
       
        for (int i = n; i > position; i--) {
            arr[i] = arr[i - 1];
        }
        arr[position] = value;
        n++; 

    
        printf("Mang sau khi thêm phan tu: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}

