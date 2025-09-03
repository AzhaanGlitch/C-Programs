#include<stdio.h>
#include<string.h>
int main(){
char str1[50]="Hello, ";
char str2[]="World!";
char result[100];
int length=strlen(str1);
printf("Length of str1: %d \n", length);
strcpy(result,str1);
strcat(result,str2);
printf("Concatenation String: %s \n", result);
return 0;
}
