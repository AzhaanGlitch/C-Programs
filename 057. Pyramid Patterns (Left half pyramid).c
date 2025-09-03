#include<stdio.h>
int main(){
int rows;
printf("Enter the height of the Pyramid \n");
scanf("%d", &rows);
for(int i=1; i<=rows; ++i){
    for(int j=1; j<=i; ++j){
    printf("* ");
    }
    printf("\n");
}
return 0;
}
