#include<stdio.h>
#include<stdlib.h>

struct Car{
    char company_name[20],model[30],type[10];
    float mileage,horsepower;
};

int  main(){
    int length,i;

    //Enter No. of Elements
    printf("Enter No. of Cars \n");
    scanf("%d",&length);

    //Struct Car Array
    struct Car car[20];

    for(i=0;i<length;i++){

    //Company Name
    printf("\nEnter Car Name :\n");
    scanf(" %[^\n]s ",car[i].company_name);

    //Model
    printf("Enter %s \'s Model :\n",car[i].company_name);
    scanf(" %[^\n]s ",car[i].model);

    //Type
    printf("Enter %s \'s Type :\n",car[i].company_name);
    scanf(" %[^\n]s",car[i].type);

    //Mileage
    printf("Enter %s \'s Mileage:\n",car[i].company_name);
    scanf("%f",&car[i].mileage);

    //Horsepower
    printf("Enter %s \'s Horsepower:\n",car[i].company_name);
    scanf("%f",&car[i].horsepower);

    printf("\nRecorded   !!! \n");
    }


    printf("\nDetails\n");
    for(i=0;i<length;i++){
        printf("%s\t%s\t%s\t%f\t%f\n",car[i].company_name,car[i].model,car[i].type,car[i].mileage,car[i].horsepower);
    }


    return 0;
}

