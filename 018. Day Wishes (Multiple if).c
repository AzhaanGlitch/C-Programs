#include<stdio.h>
int main(){
int time;
printf("What time is it? \n");
scanf("%d", &time);
if(time>0&&time<5){
    printf("Its the time of before dawn, go to bed mate!");
}
else if(time>5&&time<12){
    printf("Good Morning");
}
else if(time>12&&time<16){
    printf("Good Afternoon");
}
else if(time>16&&time<20){
    printf("Good Evening");
}
else if(time>20&&time<24){
    printf("Good Night");
}
else{
    printf("Abeeee, ghadi dekh ke daal na time");
}
return 0;
}
