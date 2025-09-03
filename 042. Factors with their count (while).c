#include<stdio.h>
int main(){
int num, i, count=0;
printf("Enter a number to find its factor \n");
scanf("%d", &num);
i=1;
while(i<=num){
    if(num%i==0){
        printf("Factor of the given number is %d \n", i);
    count++;
    }
    i++;
}
printf("Total number of factors are %d \n", count);
return 0;
}


