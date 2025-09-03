#include<stdio.h>
#include<string.h>
int main(){
char str1[20]="Data ";
char str2[]="Types !";
strncat(str1, str2, 3);
printf("Concatenated String: %s\n", str1);
return 0;
}
