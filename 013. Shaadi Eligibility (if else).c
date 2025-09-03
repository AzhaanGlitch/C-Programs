#include<stdio.h>
int main(){
int x;
printf("Enter your age \n");
scanf("%d", &x);
if(x>=21){
    printf("You are eligible for marriage");
}
else{
    printf("You are under age, hence not eligible for marriage");
}
return 0;
}
