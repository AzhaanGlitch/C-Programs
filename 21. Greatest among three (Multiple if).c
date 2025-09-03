#include<stdio.h>
int main(){
int x,y,z;
printf("Enter the first integer");
scanf("%d", &x);
printf("Enter the second integer");
scanf("%d", &y);
printf("Enter the third integer");
scanf("%d", &z);
if(x>y&&x>z){
    printf("First is the greatest integer among the given");
}
else if(y>x&&y>z){
    printf("Second is the greatest integer among the given");
}
else{
    printf("Third is the greatest integer among the given");
}
return 0;
}
