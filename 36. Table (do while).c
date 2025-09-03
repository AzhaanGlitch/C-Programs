#include<stdio.h>
int main(){
int number,i=1;
printf("Enter a number to generate its Table \n");
scanf("%d", &number);
printf("Table for %d \n", number);
do{
    printf("%dx%d=%d \n", number, i, number*i);
    ++i;
}
while(i<=10);
return 0;
}

