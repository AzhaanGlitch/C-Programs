#include<stdio.h>
int main(){
int matrix[3][3]={
{1,2,3},
{4,5,6},
{7,8,9}
};
printf("Matrix \n");
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        printf("%d\t", matrix[i][j]);
    }
    printf("\n");
}
int sum=0;
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        sum+=matrix[i][j];
    }
}
printf("\nSum of all elements %d\n", sum);
printf("\nElement at matrix[1][2] is %d\n", matrix[1][2]);
matrix[1][2]=10;
printf("Modified elements at matrix[1][2] is %d\n", matrix[1][2]);
printf("\nModified Matrix \n");
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        printf("%d\t", matrix[i][j]);
    }
    printf("\n");
}
int sum1=0;
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        sum1+=matrix[i][j];
    }
}
printf("\nSum of all elements is %d\n", sum1);
return 0;
}
