//This Code Solved By Joy Mondal (codewithjoymonda) WUB 53A
//If You Want to learn more code visite my youtube channel : Codewithjoy
//https://www.youtube.com/c/CodeWithJoy

#include <stdio.h>
int main()
{
    int a,b,c;
    scanf ("%d%d%d", &a, &b, &c);
    if(a>b)
    {
        if(a>c) printf ("%d eh o maior\n",a);
        else printf ("%d eh o maior\n",c);
    }
    if(b>a)
    {
        if(b>c) printf ("%d eh o maior\n",b);
        else printf ("%d eh o maior\n",c);
    }
    return 0;
}