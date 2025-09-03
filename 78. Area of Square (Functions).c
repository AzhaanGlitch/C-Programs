#include<stdio.h>
void square_area(int side){
float area=side*side;
printf("The Area of Square is %f \n", area);
}
int main(){
int side;
printf("Enter the length of side of Square \n");
scanf("%d", &side);
square_area(side);
return 0;
}
