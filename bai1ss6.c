#include <stdio.h>
int main() {
    int num, tongSole = 0;
    for (int i = 1; i <= 5; i++) {
        printf("Nhap so thu %d: ", i);
        scanf("%d", &num);
        if (num % 2 != 0) { 
            tongSole += num;
        }
    }
    printf("Tong cac so le la: %d\n", tongSole);
    return 0;
}

