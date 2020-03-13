#include<stdio.h>
//Main Function
int main(){
    int array[100];
    int limit,i;

    //Limit of Array
    printf("Enter the Range of Array :\n");
    scanf("%d",&limit);

    //Input : Elements
    printf("Enter %d  Elements \n",limit);
    for(i=0;i<limit;i++){
        scanf("%d",&array[i]);
    }

    //Output : Display
    printf("\nElements\n");
    for(i=0;i<limit;i++){
        printf("Element at Index %d is %d\n",i,array[i]);
    }
    return 0;
}