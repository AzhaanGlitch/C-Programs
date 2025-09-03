#include<stdio.h>
int main(){
int i,num,sum=0;
float average;
printf("Enter 10 numbers \n");
for(i=1;i<=10;i++){
    printf("Number %d \n",i);
    scanf("%d", &num);
    sum=sum+num;
}
average=sum/10.0;
printf("The sum of 10 numbers is %d \nTheir Average is %f\n",sum,average);
return 0;
}
