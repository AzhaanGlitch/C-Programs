#include<stdio.h>
int main(){
int n, sum=0, i;
printf("Enter the number of elements in the array for addition \n");
scanf("%d", &n);
int arr[n];
printf("Enter the elements in the array \n");
for(i=0; i<n; i++){
    scanf("%d", &arr[i]);
}
for(i=0; i<n; i++){
    sum=sum+arr[i];
}
printf("Total of all elements in the array is %d\n", sum);
return 0;
}
