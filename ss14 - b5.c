#include<stdio.h>
int main(){
	char word[100]="My name is Ngo Xuan Hoang";
	int length=strlen(word);
	int count=0;
	for(int i=0;i<length;i++){
		if(word[i] == ' '){
			count++; 
		} 
	} 
	 printf("Str has %d char", count+1);
	 return 0; 
} 
