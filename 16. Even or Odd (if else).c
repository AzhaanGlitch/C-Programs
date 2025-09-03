#include<stdio.h>
int main(){
int x;
printf("Enter the number \n");
scanf("%d", &x);
if(x%2==0){
    printf("The given number is Even");
}
else{
    printf("The given number is Odd");
}
return 0;
}
