#include<stdio.h>
#include<string.h>
struct employee{
    char name[50];
    char dept[10];
    int salary;
    int rating;
};
int main(){
    printf("number of employees:");
    int n;
    scanf("%d",&n);
    struct employee emp[n];
    
    for(int i=0;i<n;i++){
        printf("name of emp %d:",i+1);
        scanf("%s",&emp[i].name);
        printf("dept of emp %d:",i+1 );
        scanf("%s",&emp[i].dept);
        printf("salary of emp %d:",i+1 );
        scanf("%d",&emp[i].salary);
        printf("rating of emp %d:",i+1);
        scanf("%d",&emp[i].rating);
        printf("\n");
    }
    printf("-------------------EMPLOYEE DETAILS-----------------------\n");

    for(int i=0;i<n;i++){
        if(emp[i].rating>=3){
            emp[i].salary+=(0.1)*(emp[i].salary);
        }
        else{
            emp[i].salary+=(0.07)*(emp[i].salary);
        }
        if(emp[i].dept[0]=='H'){
            printf("Name: %s\n",emp[i].name);
            printf("dept: %s\n",emp[i].dept); 
            printf("Salary: %d\n",emp[i].salary);
            printf("rating: %d\n",emp[i].rating);

            printf("\n");
        }
    }
}    