#include <stdio.h>
int main() {
    int num;
    int soChan = 0, soLe = 0;
    for (int i = 1; i <= 5; i++) {
        printf("Nhap so thu %d: ", i);
        scanf("%d", &num);
        if (num % 2 == 0) {
            soChan++;
        } else {
            soLe++;
        }
    }
    printf("So luong so chan: %d\n", soChan);
    printf("So luong so le: %d\n", soLe);
    return 0;
}

