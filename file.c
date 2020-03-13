#include<stdio.h>
#include<stdlib.h>

int main(){
    //Variables
    int count_chars=1;

    //Declaring File Pointer
    FILE *fp;
    //Decating Variable to read and store the Data From The File
    char ch;
    //Open File
    fp=fopen("file.txt","r");
    //Access Contents of the File
    //EOF - End Of File
    while((ch=fgetc(fp))!=EOF){
        printf("%c",ch);
        count_chars++;
    }
    printf("\n%d\n",count_chars);
    //Close the File
    fclose(fp);

    return 0;
}