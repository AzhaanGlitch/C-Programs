#include<stdio.h>
int main(){
printf("\n\nFind Size of Fundamental Data type \n");
printf("---------------------------------------\n");
printf("The sizeof(char) is %zu bytes \n", sizeof(char));
printf("The sizeof(short) is %zu bytes \n", sizeof(short));
printf("The sizeof(int) is %zu bytes \n", sizeof(int));
printf("The sizeof(long) is %zu bytes \n", sizeof(long));
printf("The sizeof(long long) is %zu bytes \n", sizeof(long long));
printf("The sizeof(float) is %zu bytes \n", sizeof(float));
printf("The sizeof(double) is %zu bytes \n", sizeof(double));
printf("The sizeof(long double) is %zu bytes \n", sizeof(long double));
printf("The sizeof(bool) is %zu bytes \n", sizeof(_Bool));
return 0;
}
