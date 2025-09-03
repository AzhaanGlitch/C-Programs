#include<stdio.h>
int main(){
const int rows=3;
const int columns=4;
int matrix[3][4]={
{1,2,3,4},
{5,6,7,8},
{9,10,11,12}
};
printf("Original Matrix \n");
for(int i=0; i<rows; ++i){
    for(int j=0; j<columns; ++j){

        printf("%d ", matrix[i][j]);
    }
    printf("\n");
}
int transposeMatrix[4][3];
for(int i=0; i<columns; ++i){
    for(int j=0; j<rows; ++j){
        transposeMatrix[i][j]=matrix[j][i];
    }
}
printf("\nTransposed Matrix \n");
for(int i=0; i<columns; ++i){
    for(int j=0; j<rows; ++j){
        printf("%d ", transposeMatrix[i][j]);
    }
    printf("\n");
}
return 0;
}
