#include<stdio.h>
int main(){
int i,num,sum=0;
printf("Input number \n");
scanf("%d", &num);
printf("The first %d natural numbers are: \n", num);
for(i=1;i<=num;i++){
    printf("%d ",i);
    sum=sum+i;
}
printf("\nThe sum of the natural numbers up to %d terms is %d \n",num,sum);
return 0;
}
