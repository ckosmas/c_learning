#include <stdio.h>

int main(){

    FILE *pFile = fopen("output.txt", "w");

    char text[] = "Fun Fun Fun!\nEverywhere is Fun Fun Fun!";

    if(pFile == NULL){
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(pFile, "%s", text);
    printf("File was written successfully.\n");
    fclose(pFile);

   
    return 0;
}
