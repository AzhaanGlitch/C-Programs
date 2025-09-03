#include<stdio.h>
int main(){
FILE *file;
int num1, num2, num3, sum=0;
file=fopen("sum.txt", "r");
if(file==NULL){
    printf("Error in opening the file \n");
    return 1;
}
fscanf(file, "%d%d%d", &num1, &num2, &num3);
sum=num1+num2+num3;
fclose(file);
printf("First Number- %d \n", num1);
printf("Second Number- %d \n", num2);
printf("Third Number- %d \n", num3);
printf("The sum is %d \n", sum);
return 0;
}

