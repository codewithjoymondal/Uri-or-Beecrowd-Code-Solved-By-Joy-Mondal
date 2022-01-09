//This Code Solved By Joy Mondal (codewithjoymonda) WUB 53A
//If You Want to learn more code visite my youtube channel : Codewithjoy
//https://www.youtube.com/c/CodeWithJoy
#include <stdio.h>
int main()
{
    int X,a,b;
    scanf("%d", &X);
    if(X%2==0)
    {
        for(a=X+1;a<=X+11;a=a+2)
            printf("%d\n",a);
    }
    else
    {
        for(b=X;b<=X+10;b=b+2)
            printf("%d\n",b);
    }
    return 0;
}
