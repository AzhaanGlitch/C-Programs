#include<stdio.h>
int main(){
int x,y,z;
printf("Enter the first integer \n");
scanf("%d", &x);
printf("Enter the second integer \n");
scanf("%d", &y);
printf("Enter the third integer \n");
scanf("%d", &z);
if(x<y){
    if(x<z){
        printf("The first integer is smallest");
    }
    else{
        printf("The third integer is the smallest");
    }
}
else{
    if(y<x){
      if(y<z){
        printf("The second integer is the smallest");
        }
        else{
            printf("The third integer is the smallest");
        }
}
}
return 0;
}
