#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[100];
    int n = 0;
    int lua_chon, value, position;

    while (1) {
        printf("\nMENU:\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("0. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &lua_chon);

        switch (lua_chon) {
            case 0:
                exit(0);
            case 1:
                printf("Nhap so phan tu cua mang: ");
                scanf("%d", &n);
                for (int i = 0; i < n; i++) {
                    printf("Nhap gia tri cho phan tu arr[%d]: ", i);
                    scanf("%d", &arr[i]);
                }
                break;
            case 2:
                printf("Mang hien tai: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 3:
                printf("Nhap gia tri muon them: ");
                scanf("%d", &value);
                printf("Nhap vi tri muon them (0 den %d): ", n);
                scanf("%d", &position);
                if (position < 0 || position > n) {
                    printf("Vi tri khong hop le!\n");
                } else {
                    for (int i = n; i > position; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[position] = value;
                    n++;
                }
                break;
            case 4:
                printf("Nhap vi tri can sua (0 den %d): ", n - 1);
                scanf("%d", &position);
                if (position < 0 || position >= n) {
                    printf("Vi tri khong hop le!\n");
                } else {
                    printf("Nhap gia tri moi: ");
                    scanf("%d", &value);
                    arr[position] = value;
                }
                break;
            case 5:
                printf("Nhap vi tri can xoa (0 den %d): ", n - 1);
                scanf("%d", &position);
                if (position < 0 || position >= n) {
                    printf("Vi tri khong hop le!\n");
                } else {
                    for (int i = position; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                }
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    }

    return 0;
}

