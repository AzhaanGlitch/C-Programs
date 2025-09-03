#include<stdio.h>
int main(){
int month;
printf("Enter the month's number (1-12) \n");
scanf("%d", &month);
switch(month){
case 1:
case 2:
case 12:
    printf("Winter season is going on");
    break;
case 3:
case 4:
case 5:
case 6:
    printf("Summer season is going on");
    break;
case 7:
case 8:
case 9:
    printf("Rainy season is going on");
    break;
case 10:
case 11:
    printf("Autumn season is going on");
    break;
default:
    printf("There are only 12 Months mate");
    break;
}
return 0;
}
