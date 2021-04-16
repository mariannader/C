#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int add (int a,int b)
{
    int A;
    A=a+b;
    printf("\a \n the addition is: %d \n",A);
    return A;
}
int subtract (int s,int d)
{
    int S;
    S=s-d;
    printf("\a \n THE SUBTRACT IS %d\n",S);
    return S;
}
int multiply (int c, int e)
{
    int M;
    M=c*e;
    printf("\a \n THE MULTIPLY IS %d\n",M);
    return M;
}
int divide (int u,int p)
{
    int f;
    if (p!=0 &&u!=0)
        f=u/p;

    else
        printf("\a it is not allow!!!!!!!!!! \n");


}
int modulus (int w,int q)
{
    int T;
    T=w%q;
    printf("\a \n THE MODULUS IS %d\n",T);
}
int main()
{
    printf("Hello world!\n");
    printf("\a \n this a C program that is a calculator ");
    printf("\n THE MENU :\a");
    printf("\n 1. Add \n 2. Subtract \n 3. Multiply \n 4. Divide \n 5. Modulus ");

    int menu,x,y, addition,sub,mul,div,mod;

    printf("\n \a please enter the first number:");
    scanf("%d",&x);
    printf("\n \a please enter your second number:");
    scanf("%d",&y);

    printf("\n \a choose the operation that you want: ");
    scanf("%d",&menu);

    switch(menu)
    {
    case 1:
        addition=add(x,y);
        break;
    case 2:
        sub=subtract(x,y);
        break;
    case 3:
        mul=multiply(x,y);
        break;
    case 4:
        div=divide(x,y);
        break;
    case 5:
        mod=modulus(x,y);
        break;


    }



    return 0;
}
