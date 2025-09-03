#include<stdio.h>
int main(){
FILE *fptr;
fptr=fopen("rectangle.txt", "w");
fclose(fptr);
return 0;
}

