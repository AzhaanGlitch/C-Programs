#include<stdio.h>
int main(){
int num, a=0, b=1, c, i;
printf("Enter the number \n");
scanf("%d", &num);
printf("Fibonacci Series is \n");
for(i=0; i<=num; i++){
    if(i<=1){
        c=i;
    }
    else{
        c=a=b;
        a=b;
        b=c;
    }
    printf("%d\n", c);
}
return 0;
}
