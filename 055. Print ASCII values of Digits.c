#include<stdio.h>
int main(){
int x;
printf("Upper case Letters \n");
for(x=65; x<=90; x++){
    printf("Digits %d, ASCII %c \n", x,x);
}
printf("Lower Case Letters \n");
for(x=97; x<=122; x++){
    printf("Digits %d, ASCII %c \n", x,x);
}
return 0;
}
