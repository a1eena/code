#include <stdio.h>
          int main()
{  
     int N,i;
    int sume=0,sumo=0;
   
    printf("Enter the numbers limit\n");
    scanf("%d", &N);
 printf("enter the numbers");
     for(i=1; i<=N; i++){
       if(i%2==0)
             sume=sume+1;
else
           sumo=sumo+1;
}

         printf("\nsum of all even numbers are =%d ",sume);
         printf("\nsum of all odd numbers are =%d ",sumo);
   return 0;
}