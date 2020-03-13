#include<stdio.h>
#include<stdlib.h>

//Structure Department
struct dept{
	int no_of_members;
	char name[20];
	float budget;
};




//Main Class
int main(){

	//CSE is a pointer to structure of type dept
	struct dept *cse ; 

	//(Typecast)(Memory Allocation)
	cse=(struct dept *)malloc(sizeof(struct dept));
	
	//Input	
	printf("Enter Name of the Department : ");
	scanf(" %[^\n]s ",cse->name);
	
	printf("Enter No.s of Employees : ");
	scanf("%d",&cse->no_of_members);

	printf("Enter Department Budget : ");
	scanf("%f",&cse->budget);


	//Output
	printf("Department : %s \n Budget : Rs. %f \n  No. of Employees : %d\n ",cse->name,cse->budget,cse->no_of_members);

return 0;
}
