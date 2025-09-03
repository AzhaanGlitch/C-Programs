#include<stdio.h>
struct emp{
char name[50];
int age, empno;
float weight;
};

int main(){
struct emp e[2];
int i;
printf("ENTER THE DETAILS OF EMPLOYEE \n");
for(i=0; i<2; i++){
    printf("Enter Employee Name \n");
    scanf("%s", e[i].name);
    printf("Enter Employee Age \n");
    scanf("%d", &e[i].age);
    printf("Enter Employee Number \n");
    scanf("%d", &e[i].empno);
    printf("Enter Employee Weight \n");
    scanf("%f", &e[i].weight);
    printf("\nEmployee Name- %s\nEmployee Age- %d\nEmployee Number- %d\nEmployee Weight (Kg)- %f\n\n\n",e[i].name,e[i].age,e[i].empno,e[i].weight);
}
return 0;
}
