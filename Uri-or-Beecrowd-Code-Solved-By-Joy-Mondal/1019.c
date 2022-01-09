//This Code Solved By Joy Mondal (codewithjoymonda) WUB 53A
//If You Want to learn more code visite my youtube channel : Codewithjoy
//https://www.youtube.com/c/CodeWithJoy

#include <stdio.h>
int main()
{
    int a,b,c,d, N;
    scanf ("%d", &N);
    a=N/3600;
    b=N%3600;
    c=b/60;
    d=b%60;
    printf ("%d:%d:%d\n",a,c,d);
    return 0;
}