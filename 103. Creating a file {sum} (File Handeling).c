#include<stdio.h>
int main(){
FILE *fptr;
fptr=fopen("sum.txt", "w");
fclose(fptr);
return 0;
}
