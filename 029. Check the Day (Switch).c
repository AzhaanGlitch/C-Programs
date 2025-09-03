#include<stdio.h>
int main(){
int number;
printf("Enter the number between 1 to 7 \n");
scanf("%d", &number);
switch(number){
case 1:
    printf("Monday");
    break;
case 2:
    printf("Tuesdays");
    break;
case 3:
    printf("Wednesday");
    break;
case 4:
    printf("Thursday");
    break;
case 5:
    printf("Friday");
    break;
case 6:
    printf("Saturday");
    break;
case 7:
    printf("Sunday");
    break;
default:
    printf("Wrong Number, Out of asked range");
    }
return 0;
}
