#include<stdio.h>
int main(){
int arr[5], num, pos=0, i;
printf("Enter the Elements \n");
for(i=0; i<5; i++){
    scanf("%d", &arr[i]);
}
printf("Enter the Element you want to Search \n");
scanf("%d", &num);
for(i=0; i<5; i++){
    if(num==arr[i]){
        pos=i+1;
    break;
}
}
if(pos==0){
    printf("This Position is not in the list \n");
}
else{
    printf("The Position of this element is %d \n", pos);
}
return 0;
}
