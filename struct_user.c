#include<stdio.h>
#include<stdlib.h>


//Stucture  User
struct user{
	char name[20],password[30],security_question[200];
	int no_of_valid_attempts;
	float fine;
};


//Main Class
int main(){

	//Pointer
	struct user *user;
	
	//Memory Allocation using Type Casting
	user=(struct user * )malloc(sizeof(struct user));
	
	//Accept Values
	printf("Enter Username : ");
	scanf("%s",user->name);

	printf("Enter Password : ");
	scanf("%s",user->password);
	
	printf("Security Question ? ");
	scanf(" %[^\n]s ",user->security_question);
	
	printf("No. of Attempts : ");
	scanf("%d",&user->no_of_valid_attempts);
	
	printf(" Fine Charged : ");
	scanf("%f",&user->fine);
	
	//Output
	printf("Enterd Values : \n Username : %s \n  Password : %s \n   Security Question : %s \n    No. of Attempts : %d \n     Fine : Rs. %f\n",user->name,user->password,user->security_question,user->no_of_valid_attempts,user->fine);

	return 0;
}
