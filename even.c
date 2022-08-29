#include <stdio.h>
          int main()
{  
     int N,i;
    printf("Enter the numbers limit\n");
    scanf("%d", &N);
      printf("ALL EVEN NUMBER ARE\n ");
     for(i=1; i<=N
 ; i++)
       if(i%2==0)
         printf("%d\n",i);
   return 0;
}