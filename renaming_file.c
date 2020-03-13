#include<stdio.h>
#include<stdlib.h>

int main(){
    //Variables
    FILE *fp;
    char fileName[100],new_FileName[100];

    //File Name
    printf("Enter File  Name : ");
    scanf(" %[^\n]s ",fileName);

    printf("Enter new File  Name : ");
    scanf(" %[^\n]s ",new_FileName);

    fp=fopen(fileName,"r");
    if(fp==NULL){
        printf("\n File Doesn't EXISTS !!!\n");
    }else{
        if(rename(fileName,new_FileName)!=0){
        printf("\nDone Renaming ....\nCheck it if u like\n.....\nThank You !!!\n");
        }
    }
    fclose(fp);
    return 0;   
}