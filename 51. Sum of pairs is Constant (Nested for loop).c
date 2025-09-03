#include<stdio.h>
int main(){
int sum;
printf("Enter the number \n");
scanf("%d", &sum);
printf("Sum of whole numbers whose sum is %d \n", sum);
for(int i=0; i<=sum;i++){
    for(int j=0;j<=sum;j++){
        if(i+j==sum){
            printf("(%d,%d)\n",i,j);
        }
    }
}
return 0;
}
