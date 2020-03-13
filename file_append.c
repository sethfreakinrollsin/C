#include<stdio.h>
#include<stdlib.h>

int main(){
    //File Pointer
    FILE *fp;

    //Variables
    char file[500];

    //File Name
    printf("Enter File Name : ");
    scanf(" %[^\n]s ",file);

    //Opening File
    fp=fopen(file,"a");

    //Check Existance/Error
    if(fp!=NULL){
         //Sentence
        printf("Enter Text : ");
        scanf(" %[^\n]s ",file);

        //Writting  the Sentence
        //Syntax :fprintf(<File Pointer>,<format>,<text/variable>)
        fprintf(fp,"\n%s",file);

        fclose(fp);

        printf("\nSentence Appended !\n");
    }else{
        printf("\nERROR.\nInvalid File\n");
        fclose(fp);
    }


    return 0;
}