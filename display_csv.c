//Accept Structures CSV and store it in structure and then diplay it.

#include<stdio.h>

int main(int argc,char *argv[]){

	if(argc==2){
		FILE *fp;
		fp=fopen(argv[1],"r");
		if(fp!=NULL){



		}else{
			printf("\nFILE DOES'T EXISTS \n")
		}
	}else{
		printf("\nInvalid Number of Arguments\n");
	}



return 0;
}
