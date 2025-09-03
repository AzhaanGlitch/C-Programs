#include<stdio.h>
int main(){
int a,b,c, operation;
printf("Enter the first number: \n");
scanf("%d", &a);
printf("Enter the number that should be subtracted: \n");
scanf("%d", &b);
printf("Enter the number that is finally added: \n");
scanf("%d", &c);
operation=(a-b)+c;
printf("The final answer of the given values is: %d \n",operation);
return 0;
}
