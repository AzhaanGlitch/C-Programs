#include<stdio.h>
void triangle_area(int b, int h){
float area=(b*h)/2;
printf("The Area of Triangle is %f \n", area);
}
int main(){
int b,h;
printf("Enter the Breadth and Height of Triangle \n");
scanf("%d%d", &b,&h);
triangle_area(b,h);
return 0;
}
