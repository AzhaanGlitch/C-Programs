#include<stdio.h>
int main(){
long min=0,hour=0,day=0,month=0,year=0;
printf("Enter the Minutes \n");
scanf("%ld", &min);
if(min>0){
       hour=min/60;
       min=min%60;
    }
    if(hour>0){
        day=hour/24;
        hour=hour%24;
    }
    if(day>0){
        month=day/30;
        day=day%30;
    }
    if(month>0){
        year=month/12;
        month=month%12;
    }
printf("Years=%ld \n",year);
printf("Months=%ld \n",month);
printf("Days=%ld \n",day);
printf("Hours=%ld \n",hour);
printf("Minutes=%ld \n",min);
return 0;
}
