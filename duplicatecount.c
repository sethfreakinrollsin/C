#include<stdio.h>
#include<stdlib.h>
//Main Function
int main(){
    int i,limit,count=0,j;
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

    //Processing : Finding Count Of Duplicates
    printf("\nElements\n");
    
    for(i=0;i<limit;i++){
        for(j=i+1;j<limit;j++){
            if(ptr[i]==ptr[j]){
            count++;
                if(ptr[j]==ptr[j+
                1]){
                count--;
                i++;
            }
            }
    }
    }

    //Output Display
    printf("Count Of Duplicates is %d\n",count);
    return 0;


    return 0;
}