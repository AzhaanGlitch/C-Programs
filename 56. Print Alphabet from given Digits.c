#include<stdio.h>
int main(){
int ascii_value;
char choice;
do{
    printf("Enter an ASCII value (65 for 'A', 97 for 'a', etc):\n");
    scanf("%d", &ascii_value);
    if((ascii_value >=65 && ascii_value<=90) || (ascii_value>=97 && ascii_value<=122)){
        printf("The character for ASCII value %d is %c \n", ascii_value,ascii_value);
    }
    else{
        printf("Invalid ASCII value, Please enter a value between 65 and 90 or 97 and 122.\n");
    }
    printf("Do you want to enter another ASCII value? (y/n): \n");
    scanf("%c ", &choice);
}
while(choice=='y'||choice=='Y');
return 0;
}
