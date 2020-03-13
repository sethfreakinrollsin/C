#include<stdio.h>
#include<stdlib.h>

//Structure
struct records{
   int prn;
   char  fullname[100],address[200];
}r[40];

//Function File Read
 int fileRead(FILE *fp){

    //Accessing File  Content
    while(1){
        fread(&r,sizeof(struct records), 1,fp);
        printf("\nPRN : %d \n Full Name : %s \n  Address : %s \n",r[0].prn,r[0].fullname,r[0].address);
            }
     return 0;
 }

// Main Function
 int  main(){
    //Variables
     FILE *fp;
     char fileName[100];

    //File
    printf("Enter File Name : ");
    scanf(" %[^\n]s ",fileName);
    //Opening The File
    fp=fopen(fileName,"r");
    if(fp!=NULL){
    printf("\nReading File ....... \n");
    fileRead(fp);
    }else{
        printf("\nERROR.\nWrong File Name Entered !!!!!\n");
    }
    fclose(fp);
     return 0;
 }