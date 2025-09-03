#include<stdio.h>
int main(){
int j,cube;
printf("Enter the number \n");
scanf("%d", &cube);
for(j=1;j<=cube;j++){
    printf("The number is %d and the cube of %d is %d \n", j,j,(j*j*j));
}
return 0;
}
