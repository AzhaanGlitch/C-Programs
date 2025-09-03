#include<stdio.h>
int main(){
int a,b,c;
printf("Enter the length of sides \n");
scanf("%d%d%d", &a,&b,&c);
if(a==b&&b==c){
   printf("It is an equilateral triangle");
}
else if(a==b||b==c||a==c){
    printf("It is an isosceles triangle");
}
else{
    printf("It is a scalene triangle");
}
return 0;
}
