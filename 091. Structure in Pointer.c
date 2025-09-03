#include<stdio.h>
struct student{
int sno;
char sname[30];
float marks;
};
int main(){
struct student s;
struct student *st;
printf("Enter Number, Name and Marks \n");
scanf("%d%s%f", &s.sno,s.sname,&s.marks);
st=&s;
printf("Details of the Student are: \n");
printf("Number= %d \n", st->sno);
printf("Name= %s \n", st->sname);
printf("Marks= %f \n", st->marks);
return 0;
}
