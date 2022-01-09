//This Code Solved By Joy Mondal (codewithjoymonda) WUB 53A
//If You Want to learn more code visite my youtube channel : Codewithjoy
//https://www.youtube.com/c/CodeWithJoy

#include <stdio.h>
int main()
{
    int a,b=0,N;
    scanf ("%d", &N);
    for(a=2;a<=N;a=a+2)
    {
        b=a*a;
        printf("%d^2 = %d\n",a,b);
        b=0;
    }
    return 0;
}