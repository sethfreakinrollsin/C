#include<stdio.h>
#include<stdlib.h>

int main(){
    //Variables
    FILE *fp;
    int count_line=1;
    char fileName[40];

    //open File
    printf("Enter File Name :");
    scanf(" %s",fileName);

    fp=fopen(fileName,"r");

    if(fp==NULL){
        printf("\nError\nFile Doesn't Exist !!! \n \n ");
    }else{
        printf(" \nFile  Exists !!! \n ") ;
        while(1){
           fileName[0] = fgetc(fp);
           if(fileName[0]==EOF){
               break;
           }else{
               if(fileName[0]=='\n'){
                   count_line++;
               }
           }
        }
        printf("\n \nNo of Lines : %d \n",count_line);
        // if((fileName[0]=fgetc(fp))!=EOF){
        //     //Count Lines
        //     if(fileName[0]=='\n'){
        //         count_line ++;
        //     }
        // printf("\n \nNo of Lines : %d \n",count_line);
        // }
    }
    //Output
    
    //File Close
    fclose(fp);
    return 0;
}