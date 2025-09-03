#include<stdio.h>
int main(){
int rows;
printf("Enter the number of rows \n");
scanf("%d", &rows);
for(int i=1; i<=rows; i++){
    char currentChar='A';
    for(int j=1; j<=i; j++){
        printf("%c ", currentChar);
        currentChar++;
    }
    printf("\n");
}
return 0;
}
