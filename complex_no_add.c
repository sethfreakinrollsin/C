#include<stdio.h>
#include<stdlib.h>
//Complex Number : a+bi;
//Addition : (a+bi)+(c+di) = (a+c) +(b+d)i


//Stucture
struct complex_no{
	float real;
	float imaginary;
};

//Main Function
int main(){
	
	struct complex_no *c1,*c2,*add;
	
	c1= malloc(sizeof(struct complex_no));
	c2= malloc(sizeof(struct complex_no));
	add = malloc(sizeof(struct complex_no));
		
	printf("Enter First Complex Number :- \nEnter Real Number : ");
	scanf("%f",&c1->real);
	printf("Enter Imaginary Number : ");
	scanf("%f",&c1->imaginary);

	printf("Enter Second Complex Number :- \nEnter Real Number : ");
	scanf("%f",&c2->real);
	printf("Enter Imaginary Number : ");
	scanf("%f",&c2->imaginary);

	add->real=c1->real+c2->real;
	add->imaginary=c1->imaginary + c2->imaginary;
	
	printf("\nANSWER : %f + %fi \n",add->real,add->imaginary);
	
	return 0;
}
