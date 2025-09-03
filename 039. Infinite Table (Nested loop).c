#include<stdio.h>
int main (){
int num, i=1, j;
printf("Enter a number to generate its Table \n");
scanf("%d", &num);
printf("Table up to %d \n", num);
do{
    printf("Table for %d \n", i);
    j=1;
    do{
        printf("%d x %d = %d \n", i, j, i*j);
        j++;
    }
    while(j<=10);
    printf("\n");
    i++;
    }
while(i<=num);
return 0;
}
