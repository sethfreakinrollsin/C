//Header
#include<stdio.h>
#include<stdlib.h>

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
				char data[100];
				int return_value;
				
				//File Reading
				//N no of input
				//Checking for Data in File
				while(fgets(data,100,fp_ori)!=NULL){	
					//File Writing	
					fprintf(fp_new,"%s\n",data);
					
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
