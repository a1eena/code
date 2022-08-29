#include <stdio.h>
            int main()
        {
             int n , rev=0, remainder ,temp;
           
            printf("ENTER A NUMBER");
             scanf(" %d", &n);
                         temp=n;
                     while(n!=0)

                {
                      remainder=n%10;     
                      rev=rev*10+remainder;
                      n=n/10;
                }
                 if(temp==rev)
                 printf(" IT IS A REVERSE NUMBER=%d\n",rev);
                 else
                 printf("NOT A REVERSE NUMBER");
             
                 return 0;
       }
 