#include<stdio.h>
#include<stdlib.h>

int main(){
    //Variables
    int count_chars=1;

    //Declaring File Pointer
    FILE *fp;
    //Decating Variable to read and store the Data From The File
    char fileName[30];

    //Take File Name From User
    printf("Enter File Name : ");
    scanf(" %s",fileName);

    //Open File
    fp=fopen(fileName,"r");

    //Check if  file Exists or not
    if(fp==NULL){
        printf("\n\t ERROR\n\tFile Does Not EXISTS !!!");
    }else{
        printf("\n\tFile Does Exist !!!\n\tWelcome\n \n");

        while((fileName[0]=fgetc(fp))!=EOF){
        printf("%c",fileName[0]);
        }
    }

    //Close the File
    fclose(fp);

    return 0;
}