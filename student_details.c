//Header
#include<stdio.h>
#include<stdlib.h>

//Main
int main(int argc,char *argv[]){
	//Check For  Argumnents
	if(argc ==2){
		printf("\nWorking ......\n");
		FILE *fp;
		fp=fopen(argv[1],"w");
			//Check File Existance
			if(fp !=NULL){
				//Variables
				char name[30];
				long id;
				float marks;
				
				printf("Enter '-1' in Student ID  to end the File");
				
				//N no of input
				while(1){
					//Input
					printf("\nEnter Student ID : ");
					scanf("%ld",&id);
					printf("\nEnter Student Name : ");
					scanf(" %[^\n]s ",name);
					printf("\nEnter Student Marks :  ");
					scanf("%f",&marks);
					if(id==-1){
						break;
					}
					//File Writing	
					fprintf(fp,"\n%ld\t%s\t%f\n",id,name,marks);
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
