#include<stdio.h>
int main(){
int arr[100];
int original_indices[100];
int duplicate_indices[100];
int n, ctr = 0;
int i, j;
printf("Input the number of elements to be stored in the array: ");
scanf("%d", &n);
printf("Input %d elements in the array:\n", n);
for(i=0; i<n; i++){
    printf("element - %d: ", i);
    scanf("%d", &arr[i]);
}
for(i=0; i<n; i++){
    for(j=i+1; j<n; j++){
        if(arr[i]==arr[j]){
            original_indices[ctr]=i;
            duplicate_indices[ctr]=j;
            ctr++;
            break;
        }
    }
}
printf("Total number of duplicate elements found in the array: %d\n", ctr);
if (ctr>0){
    printf("The indices of the duplicate elements are:\n");
    for(i=0; i<ctr; i++){
            printf("Original index: %d, Duplicate index: %d\n", original_indices[i], duplicate_indices[i]);
    }
}
else{
    printf("No duplicate elements found.\n");
}
return 0;
}
