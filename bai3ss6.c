#include <stdio.h>
int main() {
    char password[] = "12345";
    char input[20];
    printf("Nhap mat khau: ");
    scanf("%s", input);
    if (input[0] == password[0] && strcmp(password, input) == 0) {
        printf("Mat khau dung!\n");
    } else {
        printf("Mat khau sai!\n");
    }
return 0;
}


