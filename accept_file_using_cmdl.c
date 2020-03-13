//Header File
#include<stdio.h>
#include<string.h>

//Main Function()
int main(int argc,char *argv[]){

//Argument Check
if(argc==3){
	//File Pointer
	FILE *fp;
	
	//Opening File
	fp=fopen(argv[1],argv[2]);
	
	if(strcmp(argv[2],"w")==0 || strcmp(argv[2],"a")==0){
	//Check if File Exists
	if(fp!=NULL){
		printf("\nFile Found\n");
		
		//Variables
		long prn;
		char name[50];
		float marks;
		
		printf("\nEnter '-1' in prn to EXIT \n");	
	
		while(1){
		printf("\nEnter PRN : ");
		scanf("%ld",&prn);
	
		if(prn==-1){break;}
		
		printf("\nEnter Name of %ld : ",prn);
		scanf(" %[^\n]s ",name);

		printf("\nEnter Marks of %s : ",name);
		scanf("%f",&marks);

		fprintf(fp,"%ld\t%s\t%f\n",prn,name,marks);
		}
		
		

	}else{
		printf("\nFile Does't Exist\n");
	}
	}else{
		if(fp!=NULL){
			//Varibles
			long prn;
			char name[30],name_min_marks[30];
			float marks,min_marks=100;
			int return_value;

			while(1){
			return_value=fscanf(fp,"%ld\t%s\t%f",&prn,name,&marks);
			
			
			if(marks<min_marks){
				min_marks=marks;
				strcpy(name_min_marks,name);
			}
			
			if(return_value==EOF){
			printf("Name : %s \nMin Marks : %f\n",name_min_marks,min_marks);
			break;
			}
			}
		}else{
			printf("\nFile Not Found\n");
		}
	}
	//Closing File
	fclose(fp);
	
}else{
	printf("\nInvalid Number Of Arguments\n Arguments ./a.out <filename> <mode>\n");
}

return 0;
}
