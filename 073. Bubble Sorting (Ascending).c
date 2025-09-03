#include<stdio.h>
int main(){
int arr[10], i, j, k;
printf("Enter elements in the list \n");
for(i=0; i<10; i++){
    scanf("%d", &arr[i]);
}
for(i=0; i<10; i++){
    for(j=i+1; j<10; j++){
        if(arr[i]>arr[j]){
            k=arr[i];
            arr[i]=arr[j];
            arr[j]=k;
        }
    }
}
printf("Sorted Array List \n");
for(i=0; i<10; i++){
    printf("%d\t", arr[i]);
}
return 0;
}
