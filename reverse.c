#include<stdio.h>
#include<stdlib.h>
//Main Function
int main(){
    int i,limit;
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
    }

     //Output : Display in Reverse Order 
    printf("\nElements in Reverse\n");
    for(i=limit-1;i>(-1);i--){
        printf("Element at Index %d is %d\n",i,ptr[i]);
    }


    return 0;
}