#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Hello world"; 
    for (int i = 0; i < strlen(str); i++) {
        printf("%c", str[i]);
        printf(" ");
    }
    printf("\n");
    
    return 0;
}
