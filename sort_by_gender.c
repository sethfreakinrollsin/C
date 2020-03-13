//Header
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Main
int main(int argc,char *argv[]){
	//Check For  Argumnents
	if(argc ==2){
		printf("\nWorking ......\n");
		FILE *fp_r,*fp_w;
		fp_w=fopen(argv[1],"w");
		fp_r=fopen(argv[1],"r");	
			//Check File Existance
			if(fp_r !=NULL  & fp_w!=NULL){
				//Variables
				char name[30];
				long rollno;
				char gender;
				
				printf("Enter '-1' in rollno  to end the File");
				
				//N no of input
				while(1){
					//Input
					printf("\nEnter Roll No : ");
					scanf("%ld",&rollno);
					printf("\nEnter Student Name : ");
					scanf(" %[^\n]s ",name);
					printf("\nEnter Gender :  ");
					scanf("%c",&gender);
					if(rollno==-1){
						break;
					}
					//File Writing	
					fprintf(fp_w,"\n%ld\t%s\t%c\n",rollno,name,gender);
				}
				//Closing the File
				fclose(fp_w);
				
				//Sort By Gender or Gender Discrimination
				while(1){
					fscanf(fp_r,"%ld%s%c",&rollno,name,&gender);
					if(gender=='f'){
						printf("%ld\t%s\n",rollno,name);		
					}
				}
				fclose(fp_r);
			}else{
				printf("\nFile Does\'nt Exist\n");
			}
	}else{
		printf("\nINVALID NO. OF ARGUMENTS\n");
	}	


return 0;
}
