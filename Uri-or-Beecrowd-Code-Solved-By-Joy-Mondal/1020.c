//This Code Solved By Joy Mondal (codewithjoymonda) WUB 53A
//If You Want to learn more code visite my youtube channel : Codewithjoy
//https://www.youtube.com/c/CodeWithJoy

#include <stdio.h>
int main()
{
    int a,b,c,d, N;
    scanf ("%d", &N);
    a=N/365;
    b=N%365;
    c=b/30;
    d=b%30;
    printf ("%d ano(s)\n%d mes(es)\n%d dia(s)\n",a,c,d);
    return 0;
}