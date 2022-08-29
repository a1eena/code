#include <stdio.h>
            int main()
        {
             int n , rev=0, remainder,a=0,i=2;
           
            printf("ENTER A NUMBER");
             scanf(" %d", &n);
                          while(n!=0)
                {
                      remainder=n%10;     
                      rev=rev*10+remainder;
                      n=n/10;
                }
             printf(" REVERSE NUMBER=%d\n",rev);
                   while(i<=rev/2)
              {
    if(rev%i==0)
            {
               a=1;
break;
}
i++;
}
if(a==0)
printf("prime number");
else
printf("not a prime number ");

                 return 0;
       }
 