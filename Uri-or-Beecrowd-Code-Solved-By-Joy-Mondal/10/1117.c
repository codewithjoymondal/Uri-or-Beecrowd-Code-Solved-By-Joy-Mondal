//This Code Solved By Joy Mondal (codewithjoymonda) WUB 53A
//If You Want to learn more code visite my youtube channel : Codewithjoy
//https://www.youtube.com/c/CodeWithJoy

#include <stdio.h>
int main()
{
    double a,b,c=0,d=0;
    while(1)
    {
        if(d==2)
            break;
        scanf("%lf", &a);
        if(a>=0 && a<=10)
        {
            d++;
            c+=a;
        }
        else
            printf("nota invalida\n");
    }
    b=c/2.00;
    printf("media = %.2lf\n", b);
    return 0;
}