//This Code Solved By Joy Mondal (codewithjoymonda) WUB 53A
//If You Want to learn more code visite my youtube channel : Codewithjoy
//https://www.youtube.com/c/CodeWithJoy

#include <stdio.h>
int main()
{
    int N,a,m=1;
    scanf("%d", &N);
    for(a=N;a>=1;a--)
        m*=a;
    printf ("%d\n",m);
    return 0;
}