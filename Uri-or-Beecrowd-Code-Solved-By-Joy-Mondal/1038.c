//This Code Solved By Joy Mondal (codewithjoymonda) WUB 53A
//If You Want to learn more code visite my youtube channel : Codewithjoy
//https://www.youtube.com/c/CodeWithJoy

#include <stdio.h>
int main()
{
    int X,Y;
    double A;
    scanf ("%d%d",&X,&Y);
    if(X==1)
    {
        A=Y*4.00;
        printf("Total: R$ %.2lf\n",A);
    }
    else if(X==2)
    {
        A=Y*4.50;
        printf("Total: R$ %.2lf\n",A);
    }
    else if(X==3)
    {
        A=Y*5.00;
        printf("Total: R$ %.2lf\n",A);
    }
    else if(X==4)
    {
        A=Y*2.00;
        printf("Total: R$ %.2lf\n",A);
    }
    else if(X==5)
    {
        A=Y*1.50;
        printf("Total: R$ %.2lf\n",A);
    }
    return 0;
}