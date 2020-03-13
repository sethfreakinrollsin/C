//Header Files
#include<stdio.h>
#include<stdlib.h>


//Main Function
//agrc - stores Counts No. of Arguments
//argv - stores actual Arguments
int main(int argc,char *argv[]){
	
	//Check No. of Arguments
	if(argc==4){
	
		//File Pointer
		FILE *fp;
	
		//Opening File
		fp=fopen(argv[1],"r+");

		//Check File For Content
		if(fp!=NULL){
			printf("\nReading .... \n");

			//Variables
			int roll_no,marks, return_value,found=0;
			char name[20];
			fpos_t pos; //Position Of The File Pointer
			
			//Core Logic
			//Get the file pointers Position in the Beginning
			fgetpos(fp,&pos);		
	
			while(1){
				//Scanning the File
				return_value=fscanf(fp,"%d\t%s\t%d\n",&roll_no,name,&marks);
				
				//If End Of File then BREAK
				if(return_value==-1){
					break;
				}
				
				//Check for Roll No				
				if(roll_no == atoi(argv[2])){
					printf("Found\n");
					fsetpos(fp,&pos);
					fprintf(fp,"%d\t%s\t%d\n",roll_no,name,(marks+atoi(argv[3])));
					found++;
				}
		
			}
			
			//If Roll No not Found
			if(found<0){
				printf("\n Not Found !!!\n");
			}

			//Close File
			fclose(fp);
	
		}else{
			//File Not Found
			printf("\nFile Doesn't Exist \n");
		}





	}else{
	//Invalid No. of Arguments
	printf("\nInvalid No. Of Arguments \n");
	}







return 0 ;
}
