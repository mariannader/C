#include <stdio.h>
#include <stdlib.h>

int main(void)
{


   int s1,s2,s3;
   for(s1=0;s1<=10; s1++)
   {
       for(s2=0;s2<=9-s1;s2++)
       {
           printf("");
       }
       for(s3=1; s3<=s1+1; s3++)
       {
           printf("*");
       }
       printf("\n");
   }

   int c1,c2,c3;

   for(c1=0; c1<10;c1++)
   {
       for(c3=c1; c3>=0;c3--)
        {printf("");}
        for(c2=c1; c2<10; c2++)
        {
            printf("*");
        }
        printf("\n");
   }

    return 0;
}
