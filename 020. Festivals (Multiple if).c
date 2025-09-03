#include<stdio.h>
int main(){
int Month,Date;
printf("Please enter the Month (1-12)\n");
scanf("%d", &Month);
printf("Please enter the Date (1-31) \n");
scanf("%d", &Date);
if(Month==1&&Date==1){
    printf("HAPPY NEW YEAR");
}
else if(Month==8&&Date==15){
    printf("HAPPY INDEPENDENCE DAY");
}
else if(Month==1&&Date==26){
    printf("HAPPY REPUBLIC DAY");
}
else if(Month==11&&Date==14){
    printf("HAPPY CHILDREN'S DAY");
}
else if(Month==10&&Date==2){
    printf("GANDHI JYANTI");
}
else{
    printf("NO FESTIVAL....ASUVIDHA KE LIYE KHED HAI, DHANYAWAAD");
}
return 0;
}
