#include<stdio.h>
int main(){
FILE *file;
float length, width, area;
file=fopen("rectangle.txt", "r");
if(file==NULL){
    printf("Error in opening the file \n");
    return 1;
}
fscanf(file, "%f%f", &length, &width);
area=length*width;
fclose(file);
printf("Length- %.2f\n", length);
printf("Width- %.2f\n", width);
printf("Area of rectangle- %.2f\n", area);
return 0;
}
