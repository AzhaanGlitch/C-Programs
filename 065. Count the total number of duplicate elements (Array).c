#include <stdio.h>
int main(){
int arr[100];
int num, ctr=0;
int i, j;
printf("Enter the number of elements to be stored in the array \n");
scanf("%d", &num);
printf("Input %d elements in the array \n", num);
for(i=0; i<num; i++){
    printf("element - %d : ", i);
    scanf("%d", &arr[i]);
}
for(i=0; i<num; i++){
    for(j=i+1; j<num; j++){
        if(arr[i]==arr[j]){
            ctr++;
            break;
        }
    }
}
printf("Total number of duplicate elements found in the array: %d\n", ctr);
return 0;
}
