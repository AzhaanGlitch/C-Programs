#include<stdio.h>
int main(){
int number;
printf("Enter the number between 1 to 12 \n");
scanf("%d", &number);
switch(number){
case 1:
    printf("This is January");
    break;
case 2:
    printf("This is February");
    break;
case 3:
    printf("This is March");
    break;
case 4:
    printf("This is April");
    break;
case 5:
    printf("This is May");
    break;
case 6:
    printf("This is June");
    break;
case 7:
    printf("This is July");
    break;
case 8:
    printf("This is August");
    break;
case 9:
    printf("This is September");
    break;
case 10:
    printf("This is October");
    break;
case 11:
    printf("This is November");
    break;
case 12:
    printf("This is December");
    break;
default:
    printf("This number is out of the given range");
}
return 0;
}
