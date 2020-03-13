#include<stdio.h>
//Main Function
int main(){
    int array[100];
    int limit,i,j,count=0,prev;

    //Limit of Array
    printf("Enter the Range of Array :\n");
    scanf("%d",&limit);

    //Input : Elements
    printf("Enter %d  Elements \n",limit);
    for(i=0;i<limit;i++){
        scanf("%d",&array[i]);
    }

    //Processing : Finding Count Of Duplicates
    printf("\nElements\n");
    
    for(i=0;i<limit;i++){
        for(j=i+1;j<limit;j++){
            if(array[i]==array[j]){
            count++;
                if(array[j]==array[j+
                1]){
                count--;
                i=i+1;
            }
            }
    }
    }

    //Output Display
    printf("Count Of Duplicates is %d\n",count);
    return 0;
}