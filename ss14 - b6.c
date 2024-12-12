#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Hello 67 world";
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            count++;
        }
    }
    printf("String has %d char is letter\n",count);

    return 0;
}
