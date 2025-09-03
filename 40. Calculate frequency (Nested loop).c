#include<stdio.h>
int main(){
int num, sum;
do{
    printf("Please enter your numbers for Addition one by one \n");
    scanf("%d", &num);
    if(num!=0){
        sum=sum+num;
}
}
while(num!=0);
printf("Sum of entered numbers is %d \n", sum);
return 0;
}
