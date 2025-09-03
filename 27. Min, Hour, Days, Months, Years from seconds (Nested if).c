#include<stdio.h>
int main(){
long sec=0,min=0,hour=0,day=0,month=0,year=0;
printf("Enter the Seconds \n");
scanf("%ld", &sec);
if(sec>0){ //65 seconds
    min=sec/60;
    sec=sec%60;
    if(min>0){ //61 mins
       hour=min/60;
       min=min%60;
    }
    if(hour>0){ //25 hours
        day=hour/24;
        hour=hour%24;
    }
    if(day>0){ //32 days
        month=day/30;
        day=day%30;
    }
    if(month>0){ //13 months
        year=month/12;
        month=month%12;
    }
}
printf("Years=%ld \n",year);
printf("Months=%ld \n",month);
printf("Days=%ld \n",day);
printf("Hours=%ld \n",hour);
printf("Minutes=%ld \n",min);
printf("Seconds=%ld \n",sec);
return 0;
}

