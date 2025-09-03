#include<stdio.h>
#include<string.h>
int main(){
char str1[50];
char str2[50];
printf("Enter the First String \n");
scanf("%s", str1);
printf("Enter the Second String \n");
scanf("%4s", str2);
strcat(str1, " ");
strcat(str1,str2);
printf("Concatenated String- %s \n", str1);
return 0;
}
