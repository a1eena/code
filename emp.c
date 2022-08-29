#include <stdio.h>

int main(){ struct emp{

char name[20];

int idnumber;

float salary;

};

struct emp e[10];

int i;

for (i=0;i<10; i++){

printf("Enter name of employee %d: ",i+1); 
scanf("%s", e[i].name); 
printf("Enter salary of employee %d: ",i+1); 
scanf("%f",&e[i].salary);

printf("Enter idnumber of employee %d: ",i+1); 
scanf("%d", &e[i].idnumber);

}

printf("\n");

for (i=0;i<10;i++){

printf("Name of employee %d: %s\n",i+1,e[i].name);
 printf("Idnumber of employee %d: %d\n",i+1,e[i].idnumber);

printf("Salary of employee %d: %f\n",i+1,e[i].salary);

}

return 0;
}