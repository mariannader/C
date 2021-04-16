#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("Hello world!\n");
    printf("this is the star a & b\n");

     int c1 , c2 , c3 ;
     for (c1=0;c1<=10;c1++)
     {
         for(c2=0; c2<=9+c1; c2++)
         {
             printf(" ");
         }
         for(c3=1; c3<=c1+1; c3++)
         {
             printf(" *");
         }printf("\n");
     }


    return 0;
}
