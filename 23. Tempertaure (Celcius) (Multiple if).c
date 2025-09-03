#include<stdio.h>
int main(){
float x;
printf("Enter the current temperature \n");
scanf("%f", &x);
if(x<0){
    printf("Freezing Weather");
}
else if(x>0&&x<=10){
    printf("Very Cold Weather");
}
else if(x>10&&x<=20){
    printf("Cold Weather");
}
else if(x>20&&x<=30){
    printf("Windy Weather");
}
else if(x>30&&x<=40){
    printf("Hot Weather");
}
else{
    printf("Harsh Warm Weather \nApne apne ghar mein rahe");
}
return 0;
}
