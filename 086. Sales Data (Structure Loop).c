#include<stdio.h>
struct SalesData{
double amount;
};

int main(){
struct SalesData sales[12];
for(int i=1; i<12; ++i){
    printf("Enter sales data for month %d\nRupees: \n", i);
    scanf("%lf", &sales[i].amount);
}
printf("\nSales Data for each month \n");
for(int i=1; i<12; ++i){
    printf("Month %d: Rupees %.2lf\n", i,sales[i].amount);
}
return 0;
}
