#include<stdio.h>
int main(){
int month;
printf("Input the month's number \n");
scanf("%d", &month);
switch(month){
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
    printf("This month have 31 Days \n");
    break;
case 2:
    printf("The second month is February and have 28 Days \n");
    printf("In a leap year, February have 29 Days \n");;
    break;
case 4:
case 6:
case 9:
case 11:
    printf("This month have 30 Days \n");
    break;
default:
    printf("Invalid month number \nPlease try again...\n");
    break;
    }
return 0;
}
