#include<stdio.h>
int main(){
FILE *file;
file=fopen("finderror.txt", "w");
fclose(file);
return 0;
}
