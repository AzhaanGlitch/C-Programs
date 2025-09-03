#include<stdio.h>
int main(){
int number;
do{
    printf("Enter a number (0 to quit) \n");
    scanf("%d", &number);
    if(number==0){
        printf("Exit the program \n");
        break;
    }
    if(number%2==0){
        printf("This number is Even \n");
    }
    else{
        printf("This number is Odd \n");
    }
}
while(number<=20);
return 0;
}
