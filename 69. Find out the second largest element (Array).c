#include<stdio.h>
int main(){
int max, secMax, arr[10], i;
printf("Enter the elements \n");
for(i=0; i<10;i++){
scanf("%d",&arr[i]);
}
for(i=0; i<10; i++){
if(arr[i]>=max){
    secMax=max;
    max=arr[i];
}
else if(arr[i]>secMax&&arr[i]!=max){
    secMax=arr[i];
}
}
printf("The First Largest Element is %d and \nThe Second Largest Element is %d \n", max, secMax);
return 0;
}
