#include<stdio.h>
int main(){
int num1, num2;
int sum;
printf("Enter the first number \n");
scanf("%d", &num1);
printf("Enter the second number \n");
scanf("%d", &num2);
int *ptr1=&num1;
int *ptr2=&num2;
sum= *ptr1+ *ptr2;
printf("Sum of %d and %d id %d\n", *ptr1, *ptr2, sum);
return 0;
}
