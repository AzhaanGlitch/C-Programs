#include<stdio.h>
int main(){
int a,b;
a=0;
b=10;
printf("Numbers from 0-10 \n");
while(a<=10){
    printf("%d ",a);
    a++;
}
printf("\n");
printf("Numbers from 10-0 \n");
while(b>=0){
    printf("%d ",b);
    b--;
}
return 0;
}
