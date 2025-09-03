#include<stdio.h>
int main(){
int max, arr[10], i;
printf("Enter the elements \n");
for(i=0; i<10;i++){
scanf("%d",&arr[i]);
if(arr[i]>=max){
    max=arr[i];
}
}
printf("\nMaximum element is %d", max);
return 0;
}
