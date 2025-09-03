#include<stdio.h>
int main(){
int rows;
printf("Enter the number of rows \n");
scanf("%d",&rows);
for(int i=1; i<=rows; ++i){
    for(int j=1; j<=rows-i; ++j){
            printf(" ");
    }
    for(int k=1; k<=2*i-1; ++k){
        printf("*");
    }
    printf("\n");
}
return 0;
}
