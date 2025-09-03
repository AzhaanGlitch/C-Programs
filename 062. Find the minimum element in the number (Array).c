#include<stdio.h>
int main(){
int min, arr[10], i;
printf("Enter the elements \n");
for(i=0; i<10; i++){
scanf("%d", &arr[i]);
}
min=arr[0];
for(i=0; i<10; i++){
if(arr[i]<min){
    min=arr[i];
}
}
printf("\nMinimum element is %d", min);
return 0;
}
