#include <stdio.h>
#include <unistd.h>
int main(void)
{
 for (int i=1 ; i*= 2;i)
{
 printf("%i\n",i);
sleep(1);
}
}
