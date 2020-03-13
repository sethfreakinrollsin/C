#include<stdio.h>
#include<string.h>

int main(){
    //File Pointer
    FILE *fp;

    //Variable
    char file[500];

    //File Name
    printf("Enter File Name : ");
    scanf("%s",file);

    //Opening File
    fp=fopen(file,"a");

    if(fp!=NULL){
        while(1){

            //Sentence(s)
            printf("\n* To End The Sentence type 'EOS' *\n");
            printf("Enter The Sentence(s) :");
            scanf(" %[^\n]s",file);

            //Check For EOS - End Of Sentence
            if(strcmp(file,"EOS")==0){
                break;
            }else{
                //Print in File
                fprintf(fp,"\n%s",file);
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