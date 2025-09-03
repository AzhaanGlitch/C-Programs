#include<stdio.h>
void rectangle_area(int l,int b){
    int area=l*b;
    printf("The area of rectangle is %d\n",area);
}
int main(){
    int l,b;
    printf("Enter Length & Breadth of rectangle \n");
    scanf("%d%d",&l,&b);
    rectangle_area(l,b);
    return 0;
}
