//Write  a C program to accept a file name using command line argumnets.
//Further print it.

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
		
		fp=fopen(argv[1],"r");

		//Check if File Exists or not
		if(fp== NULL){
			printf("\n!!! FILE NOT FOUND !!!\n");
			exit(1);			
		}else{
			//Variable
			char return_name[50];
			
			
			while(1){
				
				if(fscanf(fp,"%s",return_name)==-1){
					printf("\n!!!  Finished  !!!\n");
					break;
				}else{
					printf("%s\n",return_name);
				}
			}
		fclose(fp);
		}
	}


return 0;
}
