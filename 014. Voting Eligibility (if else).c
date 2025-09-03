#include<stdio.h>
int main(){
int x;
printf("Enter your age \n");
scanf("%d", &x);
if(x>=18){
    printf("You are eligible to give vote");
}
else{
    printf("You are not eligible to give vote");
}
return 0;
}
