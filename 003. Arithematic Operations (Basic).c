#include<stdio.h>
int main(){
float x,y,sum,sub,multi,divi;
printf("Enter the first number \n");
scanf("%f", &x);
printf("Enter the second number \n");
scanf("%f", &y);
sum=x+y;
printf("The addition of the given numbers is %f \n", sum);
sub=x-y;
printf("The subtraction of the given numbers is %f \n", sub);
multi=x*y;
printf("The multiplication of the given numbers is %f \n", multi);
divi=x/y;
printf("The division of the given numbers is %f \n", divi);
return 0;
}
