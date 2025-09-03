#include<stdio.h>
void Table(int rows, int columns){
printf("Multiplication Table \n");
printf(" ");
for(int j=1; j<=columns; ++j){
    printf("%4d", j);
}
printf("\n");
printf(" +");
for(int j=1; j<=columns; ++j){
    printf("----");
}
printf("\n");
for(int i=1; i<=rows; ++i){
    printf("%2d |", i);
    for(int j=1; j<=columns; ++j){
        printf("%4d", i*j);
    }
    printf("\n");
}
}
int main(){
Table(5,5);
printf("\n");
Table(7,7);
printf("\n");
Table(8,5);
printf("\n");
return 0;
}
