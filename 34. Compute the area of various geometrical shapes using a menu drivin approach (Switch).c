#include<stdio.h>
int main(){
int choice,r,l,w,b,h,a;
float area;
printf("Input 1 to find Area of Circle \n");
printf("Input 2 to find Area of Rectangle \n");
printf("Input 3 to find Area of Triangle \n");
printf("Input 4 to find Area of Square \n");
printf("Input Your Choice \n");
scanf("%d", &choice);

switch(choice){
case 1:
    printf("Input the radius of Circle \n");
    scanf("%d", &r);
    area=3.14*r*r;
    break;
case 2:
    printf("Input the length and width of rectangle \n");
    scanf("%d%d", &l,&w);
    area=l*w;
    break;
case 3:
    printf("Input the base and height of the triangle \n");
    scanf("%d%d", &b,&h);
    area=(b*h)/2;
    break;
case 4:
    printf("Input the side of the square \n");
    scanf("%d", &a);
    area=a*a;
    break;
default:
    printf("Invalid Choice!!!!");
    break;
    }
printf("The Area is %f \n", area);
return 0;
}
