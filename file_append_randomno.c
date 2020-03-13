#include<stdio.h>
#include<stdlib.h>

int main(){
      //File Pointer
    FILE *fp;

    //Variable
    char file[500];
    int number;

    //File Name
    printf("Enter File Name : ");
    scanf("%s",file);

    //Opening File
    fp=fopen(file,"a");

    if(fp!=NULL){
        while(1){

            //Random Number
            number=rand()%100;

            //Check For EON - End Of Number
            if(number==0){
                break;
            }else{
                //Print in File
                fprintf(fp,"\n%d",number);
            }
        }
         //Close File
        fclose(fp);
        
    }else{

        //Message
        printf("\nERROR. \nInvalid File \n");

        //Close File
        fclose(fp);
    }


    return 0;
}