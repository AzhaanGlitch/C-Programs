#include<stdio.h>
int main(){
int cprice,sprice,plamt;
printf("Input Cost Price \n");
scanf("%d", &cprice);
printf("Input Selling Price \n");
scanf("%d", &sprice);
if(sprice>cprice){
    plamt=sprice-cprice;
    printf("You can book your profit amount %d \n", plamt);
}
else if(cprice>sprice){
    plamt=cprice-sprice;
    printf("You incurred a loss of amount %d \n", plamt);
}
else{
    printf("You are in a no profit and no loss condition \n");
}
  return 0;
}
