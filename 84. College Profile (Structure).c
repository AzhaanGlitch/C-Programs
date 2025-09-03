#include<stdio.h>
struct ColPro{
char college_name[20], stud_name[20], fath_name[20], moth_name[20], course[5], branch[5], sp[40], address[20];
float percentile;
int rank, birth;
long long ph;
};
int main(){
struct ColPro x;
printf("COLLEGE PROFILE \n");
printf("\nName of the College: \n");
scanf("%s", x.college_name);
printf("Student's Name: \n");
scanf("%s", x.stud_name);
printf("Father's Name: \n");
scanf("%s", x.fath_name);
printf("Mother's Name: \n");
scanf("%s", x.moth_name);
printf("Year of Birth: \n");
scanf("%d", &x.birth);
printf("Your Phone number: \n");
scanf("%lld", &x.ph);
printf("Which Course: \n");
scanf("%s", x.course);
printf("Which Branch: \n");
scanf("%s", x.branch);
printf("Any Specialization: \n");
scanf("%s", x.sp);
printf("Address: \n");
scanf("%s",x.address);
printf("Percentile Scored: \n");
scanf("%f", &x.percentile);
printf("Rank Gained: \n");
scanf("%d", &x.rank);

printf("\nCOLLEGE PROFILE\n");
printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~\n");
printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
printf("\nCollege Name: %s\nStudent's Name: %s\nFather's Name: %s\nMother's Name: %s\n",x.college_name,x.stud_name,x.fath_name,x.moth_name);
printf("Percentile: %f\nRank: %d\nYear of Birth: %d\nPhone Number: %lld\n",x.percentile,x.rank,x.birth,x.ph);
printf("Course: %s\nBranch: %s\nSpecialization: %s\nAddress: %s\n",x.course,x.branch,x.sp,x.address);
return 0;
}
