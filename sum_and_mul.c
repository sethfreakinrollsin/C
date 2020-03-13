#include<stdio.h>
//Main Function
int main(){
    int array[100];
    int limit,i,sum=0,mul=1;

    //Limit of Array
    printf("Enter the Range of Array :\n");
    scanf("%d",&limit);

    //Input : Elements
    printf("Enter %d  Elements \n",limit);
    for(i=0;i<limit;i++){
        scanf("%d",&array[i]);
        sum+=array[i];
        mul*=array[i];
    }

    //Output : Display Sum and Multiplication of all Elements
    printf("\nThe Sum of all Elements is %d \n& Multiplication of all the Elements is %d \n",sum,mul);
    
    return 0;
}