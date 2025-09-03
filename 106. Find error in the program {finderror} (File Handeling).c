#include<stdio.h>
int main(){
FILE *file;
char character;
file=fopen("finderror.txt","r");
if(file==NULL){
    perror("Error opening the file \n");
    return 1;
}
character='A';
if(fputc(character,file)==EOF){
    perror("Error writing to the file \n");
    fclose(file);
    return 1;
}
fclose(file);
printf("Character written to the file successfully \n");
return 0;
}
