#include<stdio.h>
int main(){
float P,C,M,E,PHE,sum,percentage;
printf("Type your marks in Physics \n");
scanf("%f", &P);
printf("Type your marks in Chemistry \n");
scanf("%f", &C);
printf("Type your marks in Maths \n");
scanf("%f", &M);
printf("Type your marks in English \n");
scanf("%f", &E);
printf("Type your marks in Physical Health Education \n");
scanf("%f", &PHE);
sum=P+C+M+E+PHE;
percentage=(sum/400)*100;

if(percentage>=75){
    printf("Total Marks=400 \n");
    printf("Your Obtained Marks=%f \n", sum);
    printf("Percentage Generated=%f \n", percentage);
    printf("A GRADE");
}
else if(percentage>=60){
    printf("Total Marks=400 \n");
    printf("Your Obtained Marks=%f \n", sum);
    printf("Percentage Generated=%f \n", percentage);
    printf("B GRADE");
}
else if(percentage>=50){
    printf("Total Marks=400 \n");
    printf("Your Obtained Marks=%f \n", sum);
    printf("Percentage Generated=%f \n", percentage);
    printf("C GRADE");
}
else if(percentage>=33){
    printf("Total Marks=400 \n");
    printf("Your Obtained Marks=%f \n", sum);
    printf("Percentage Generated=%f \n", percentage);
    printf("D GRADE");
}
else{
    printf("Total Marks=400 \n");
    printf("Your Obtained Marks=%f \n", sum);
    printf("Percentage Generated=%f \n", percentage);
    printf("FAIL");
}
return 0;
}
