#include <stdio.h>
#include <string.h>
         int main()
{
          char str1[20];
          char str2[20];
           int value;

           printf("\tEnter the first string:\n");
            scanf("%s", str1);
           printf("\tEnter the second string:\n");
            scanf("%s", str2);

           value = strcmp(str1,str2);

             if(value==0)
              printf("STRING ARE SAME\n");
                   else
              printf("STRING ARE NOT SAME\n");
           return 0;
}
             