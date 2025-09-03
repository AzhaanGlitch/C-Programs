#include<stdio.h>
struct person{
int age;
float weight;
};
int main(){
struct person *personPtr, person1;
personPtr=&person1;
printf("Enter Age: \n");
scanf("%d", &personPtr->age);
printf("Enter Weight: \n");
scanf("%f", &personPtr->weight);
printf("Displaying");
printf("\nAge- %d", personPtr->age);
printf("\nWeight- %f", personPtr->weight);
return 0;
}
