#include<stdio.h>

int main(int argc,char *argv[]){
	
	if(argc==2){
		int string_length,i;	
		for(i=0;argv[1][i]!='\0';i++){
			string_length++;
			if(argv[1][i-1]==argv[2][0]){
				printf("Yes");
			}else{
				printf("NO");
			}
		}printf("Count : %d",string_length);
	}else{
		printf("\nInvalid Arguments\n");
	}
return 0;
}
