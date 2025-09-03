#include<stdio.h>
int main(){
int arr[10];
int i;
printf("\n\nRead and Print elements of an array \n");
printf("---------------------------------------\n");
printf("Input 10 elements in the array \n");
for(i=0; i<10; i++){
    printf("Element - %d: ", i);
    scanf("%d", &arr[i]);
}
printf("Elements in array are \n");
for(i=0; i<10; i++){
    printf("%d ", arr[i]);
}
printf("\n");
return 0;
}
