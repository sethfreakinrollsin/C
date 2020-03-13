#include<stdio.h>
#include<stdlib.h>
//Main Function
int main(){
    int i,limit,sum=0,mul=1;
    //Pointer 'ptr' has base address of array 
    int *ptr;

    //Limit of Array
    printf("Enter the Range of Array :\n");
    scanf("%d",&limit);

    //Memory Allocation using Malloc
    ptr=malloc(sizeof(int)*limit);

     //Input : Elements
    printf("Enter %d  Elements \n",limit);
    for(i=0;i<limit;i++){
        scanf("%d",&ptr[i]);
        sum+=ptr[i];
        mul*=ptr[i];
    }

    //Output : Display Sum and Multiplication of all Elements
    printf("\nThe Sum of all Elements is %d \n& Multiplication of all the Elements is %d \n",sum,mul);
    


    return 0;
}