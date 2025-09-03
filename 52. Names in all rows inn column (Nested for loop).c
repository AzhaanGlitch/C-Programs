#include<stdio.h>
int main(){
int n,m;
printf("Enter the Number of Rows \n");
scanf("%d", &n);
printf("Enter the Number of Columns \n");
scanf("%d", &m);
for(int i=1; i<=n; i++){
    for(int j=1; j<=m; j++){
        printf("Azhaan\t");
    }
    printf("\n");
}
return 0;
}
