#include<stdio.h>
void AreaOfCircle(int radius){
float Area=3.14*radius*radius;
printf("The Area of Circle is %.2f \n", Area);
}
int main(){
int radius;
printf("Enter the radius of Circle \n");
scanf("%d", &radius);
AreaOfCircle(radius);
return 0;
}
