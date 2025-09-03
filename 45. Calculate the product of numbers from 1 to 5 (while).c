#include<stdio.h>
int main(){
int num=1, product=1;
while(num<=5){
product*=num;
printf("Numbers %d, Products %d \n", num, product);
num++;
}
return 0;
}
