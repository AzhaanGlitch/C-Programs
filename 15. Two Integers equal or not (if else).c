#include<stdio.h>
int main(){
int x,y;
printf("Enter the first integer \n");
scanf("%d", &x);
printf("Enter the second integer \n");
scanf("%d", &y);
if(x==y){
    printf("Both the integers are equal");
}
else{
    printf("The given integers are not equal");
}
return 0;
}
