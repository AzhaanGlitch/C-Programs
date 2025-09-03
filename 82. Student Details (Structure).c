#include<stdio.h>
struct stud{
char name[20];
int age, rollno, marks;
double fees;
};
int main(){
struct stud s1, s2;
printf("ENTER FIRST STUDENT'S DETAILS \n");
printf("First Student's name \n");
scanf("%s", s1.name);
printf("Student's age \n");
scanf("%d", &s1.age);
printf("Student's roll number \n");
scanf("%d", &s1.rollno);
printf("Student's marks \n");
scanf("%d", &s1.marks);
printf("Student's fees \n");
scanf("%lf", &s1.fees);

printf("\n\nENTER SECOND STUDENT'S DETAILS \n");
printf("Student's name \n");
scanf("%s", s2.name);
printf("Student's age \n");
scanf("%d", &s2.age);
printf("Student's roll number \n");
scanf("%d", &s2.rollno);
printf("Student's marks \n");
scanf("%d", &s2.marks);
printf("Student's fees \n");
scanf("%lf", &s2.fees);

printf("\n\nFIRST STUDENT'S DETAILS \n");
printf("\n\nName- %s\nAge- %d\nRoll Number- %d\nMarks- %d\nFees- %lf\n", s1.name,s1.age,s1.rollno,s1.marks,s1.fees);

printf("\n\nSECOND STUDENT'S DETAILS \n");
printf("\n\nName- %s\nAge- %d\nRoll Number- %d\nMarks- %d\nFees- %lf\n", s2.name,s2.age,s2.rollno,s2.marks,s2.fees);

return 0;
}
