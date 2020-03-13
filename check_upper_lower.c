//Header
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

//Main
int main(int argc,char *argv[]){
	//Check For  Argumnents
	if(argc ==3){
		printf("\nWorking ......\n");
		FILE *fp_ori,*fp_new;
		fp_ori=fopen(argv[1],"r");
		fp_new=fopen(argv[2],"w");
			//Check File Existance
		if(fp_new !=NULL & fp_ori!=NULL){
				//Variables
				char data,tar_data;
				int return_value;
				
				//File Reading
				//N no of input
				//Checking for Data in File
				while((data=fgetc(fp_ori))!=EOF){	
					if(isupper(data)){
						tar_data=tolower(data);
					}else{
						tar_data=toupper(data);	
					}
					
					
					//File Writing	
					fputc(tar_data,fp_new);
					
				}
				//Closing the File
				fclose(fp_ori);
				fclose(fp_new);
				printf("\nDone\n");
			}else{
				printf("\nFile Does\'nt Exist\n");
			}
	}else{
		printf("\nINVALID NO. OF ARGUMENTS\n");
	}	


return 0;
}
