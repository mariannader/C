#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int n1 , n ,i,j , binno=0;

    printf("\a enter the decimal number : ");
    scanf("%d",&n);
    n1=n;
    i=1;
    for(j=n;j>0;j/=2)
    {
        binno=binno+(n%2)*i;

        i=i*10;
        n=n/2;

    }
    printf("the binary number is %d ",binno);




    return 0;
}
