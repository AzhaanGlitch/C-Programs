#include<stdio.h>
#include<string.h>
int main(){
char src[50], dest[50];
strcpy(src, " This is Source");
strcpy(dest, "This is Destination");
strncat(dest, src, 5);
printf("Final Destination String- |%s|", dest);
return 0;
}
