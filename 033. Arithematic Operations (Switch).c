#include<stdio.h>
int main(){
char operator1;
double num1,num2,total;
printf("Enter an operator(+,-,*,/) \n");
scanf("%c", &operator1);
switch(operator1){
case '+':
    printf("Enter num1 \n");
    scanf("%lf", &num1);
    printf("Enter num2 \n");
    scanf("%lf", &num2);
    total=num1+num2;
    printf("Addition result=%.2lf \n",total);
    break;
case '-':
    printf("Enter num1 \n");
    scanf("%lf", &num1);
    printf("Enter num2 \n");
    scanf("%lf", &num2);
    total=num1-num2;
    printf("Subtraction result=%.2lf \n",total);
    break;
case '*':
    printf("Enter num1 \n");
    scanf("%lf", &num1);
    printf("Enter num2 \n");
    scanf("%lf", &num2);
    total=num1*num2;
    printf("Multiplication result=%.2lf \n",total);
    break;
case '/':
    printf("Enter num1 \n");
    scanf("%lf", &num1);
    printf("Enter num2 \n");
    scanf("%lf", &num2);
    if(num2!=0){
    total=num1/num2;
    printf("Division result=%.2lf \n",total);
    }
    else{
        printf("Cannot be divided by Zero \n");
    }
    break;
default:
    printf("Invalid Operation \n");
}
return 0;
}
