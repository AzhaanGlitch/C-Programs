#include<stdio.h>
int main(){
char ch;
printf("Upper case Letters \n");
for(ch='A'; ch<='Z'; ch++){
    printf("Character %c, ASCII %d \n", ch,ch);
}
printf("Lower Case Letters \n");
for(ch='a'; ch<='z'; ch++){
    printf("Character %c, ASCII %d \n", ch,ch);
}
return 0;
}
