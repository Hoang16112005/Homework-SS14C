#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];
    printf("Enter random str : ");
    gets(str);
    printf("Entered str: %s",str);
    printf("\nStr length: %d",strlen(str));
    
	return 0;
}

