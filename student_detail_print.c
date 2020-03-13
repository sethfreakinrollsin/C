//Header
#include<stdio.h>
#include<stdlib.h>

//Main
int main(int argc,char *argv[]){
	//Check For  Argumnents
	if(argc ==2){
		printf("\nWorking ......\n");
		FILE *fp;
		fp=fopen(argv[1],"r");
			//Check File Existance
			if(fp !=NULL){
				//Variables
				int return_value;
				char name[30];
				long id;
				float marks;
								
				//N no of input
				while(1){
					//Input
					return_value=fscanf(fp,"\n%ld\t%s\t%f\n",&id,name,&marks);
					if(return_value==-1){
						break;
					}
					printf("\n%ld\n%s\n%f",id,name,marks);
				}
				//Closing the File
				fclose(fp);
			}else{
				printf("\nFile Does\'nt Exist\n");
			}
	}else{
		printf("\nINVALID NO. OF ARGUMENTS\n");
	}	


return 0;
}
