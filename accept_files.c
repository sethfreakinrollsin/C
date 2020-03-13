//Write  a C program to accept a file name using command line argumnets.
//Further ,Accept names from the user until he enters EON and store it in 
//a Structure 

//Header
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Main
int main(int argc,char *argv[]){
	//Check for Arguments
	if(argc!=2){
		printf("\n INVALID ARGUMENTS PASSED \nPass Argument a.out <filename>.<extension>\n ");
	}
	else{
		//File Pointer
		FILE *fp;
		
		fp=fopen(argv[1],"w");

		//Check if File Exists or not
		if(fp== NULL){
			printf("\n!!! FILE NOT FOUND !!!\n");
			exit(1);			
		}else{
			//Variable
			char name[50];
			
			printf("\nTYPE EON TO EXIT\n");
			
			
			while(1){
				//Enter Name
				printf("Enter Name : ");
				scanf(" %[^\n]s ",name);
				
				//Check of End Of File (EON)
				if(strcmp(name,"EON")==0){
					printf("\n!!!  Finished  !!!\n");
					break;
				}else{
					fprintf(fp,"%s\n",name);
				}
			}
		fclose(fp);
		}
	}


return 0;
}
