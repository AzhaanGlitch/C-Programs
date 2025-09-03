#include<stdio.h>
#include<string.h>
int main(){
char str1[]="Hello";
char str2[]="World";
int result=strcmp(str1, str2);
if(result==0){
    printf("The Strings are identical \n");
}
else if(result<0){
    printf("str1 is less than str2 \n");
}
else{
    printf("str1 is greater than str2 \n");
}
return 0;
}
