#include<stdio.h>
#include<stdlib.h>

// Global Variable
//File Pointer
FILE *fp;

//check_vowels
int vowels(char x){
	if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
		printf("\nIt\'s a Vowel\n");
	else
		printf("\nIt\'s a Consonant\n");
return 0;
}


//fgetc() function
int file_fgetc(){

	//Variable	
	char c;
	
	//Check if file Exists
	if(fp!=NULL){

		printf("\n File Opened Successfully \n");
		
		//Reading
		while(1){

			//fgetc() function 
			c=fgetc(fp);

			//Check for End of File(EOF) i.e '-1'
			if(c==EOF){
				break;
			}
			
			//Vowels check
			vowels(c);
		
			//output
			printf("%c",c);
		}
	
	}else{
		printf("\nFile Doesn\'t Exists !!!\n ");
	}

return 0;
}

int main(){

	//Variable
	char fileName[100];
	
	//Accept File Name
	printf("Enter File Name : ");
	scanf(" %s",fileName);
	
	//Opening File
	fp=fopen(fileName,"r");
	
	//Functions
	file_fgetc();


	//Exit/Close
	fclose(fp);

return 0;
}
