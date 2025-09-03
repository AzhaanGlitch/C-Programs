#include<stdio.h>
int main(){
char x;
printf("Input a character \n");
scanf("%c", &x);
if((x>='a'&&x<='z')||(x>='A'&&x<='Z')){
    printf("This is an alphabet \n");
}
else if(x>='0'&&x<='9'){
    printf("This is a digit \n");
}
else{
    printf("This is a special character \n");
}
return 0;
}
