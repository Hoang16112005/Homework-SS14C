#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Hello world";
    char character;
    int count = 0;
    printf("Nhap vào mot ky tu: ");
    scanf("%c",&character);
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == character) {
            count++;
        }
    }
    printf("Ky tu '%c' xuat hien %d lan trong chuoi\n", character, count);

    return 0;
}
