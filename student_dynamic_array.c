//structure inside structure: Nested Structures
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct date{
    int day,month,year;
};

struct phone_Number{
    char country_code[4],number[15];
};

// Nested Structuring
struct student{
    long PRN;
    struct date dob;
    char address[50];
    struct phone_Number phno;
    char email[345];
    struct date doj;
    float attendence_percent;
}*sp;

// Accepted  an Array
void  accept(struct student *sp,int N){
    printf("Enter the PRN : ");
    scanf("%ld",&sp[N].PRN);
    printf("Enter the DOB : ");
    scanf("%d",&sp[N].dob.day);
    scanf("%d",&sp[N].dob.month);
    scanf("%d",&sp[N].dob.year); 
    printf("Enter the Address : ");
    scanf(" %[^\n]s",sp[N].address);
    printf("Enter the Email : ");
    scanf("%s",sp[N].email);
    printf("Enter the DOJ : ");
    scanf("%d",&sp[N].doj.day);
    scanf("%d",&sp[N].doj.month);
    scanf("%d",&sp[N].doj.year); 
    printf("Enter the Attendence Percent : ");
    scanf("%f",&sp[N].attendence_percent);
    printf(" Data Saved \n");

}

// Print  an Array
void print(struct student *sp,int N){
    printf("PRN : %ld\n DOB : %d | %d | %d \n  Address : %s \n   Email : %s \n    DOJ : %d | %d | %d \n     Attendence Percent : %f \n",sp[N].PRN,sp[N].dob.day,sp[N].dob.month,sp[N].dob.year,sp[N].address,sp[N].email,sp[N].doj.day,sp[N].doj.month,sp[N].doj.year,sp[N].attendence_percent);
}

// Main Function
int main(){

    int length,i;

    //Limit
    printf("Enter No. of Students : ");
    scanf("%d",&length);

    //Allocating Memory Spaces
    sp=malloc(sizeof(*sp)*length);

    //Input
    for(i=0;i<length;i++){
    accept(sp,i);
    }

    //Output
    for(i=0;i<length;i++){
    print(sp,i);
    }
    
    return 0;
}