#include <stdio.h>
#include <stdlib.h>
/** this a C program to convert the octal number to decimal */
int main()
{
    printf("Hello world!\n");
    int decimal , octal , i, unit ;
    printf("\a  Enter the octal number : ");
    scanf("%d",&octal);
    decimal=0;
    i=1;
    while( octal )
    {
        unit=octal%8 ;
        decimal +=( unit*pow(8,i) ) ;
        octal/=8;
        i++;
    }
    printf("\a   the decimal number is %d \n     thank you!", decimal);

    printf("\n");

    return 0;
}
