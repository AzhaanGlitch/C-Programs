#include<stdio.h>
int main(){
int x;
printf("Enter the pH value of the substance \n");
scanf("%d", &x);
if(x>0&&x<7){
    printf("The substance is Acidic");
}
else if(x>7&&x<14){
    printf("The substance is Basic");
}
else if(x==7){
    printf("The substance is Neutral");
}
else{
    printf("The pH of the given substance is out of the pH Scale range");
}
return 0;
}
