//This Code Solved By Joy Mondal (codewithjoymonda) WUB 53A
//If You Want to learn more code visite my youtube channel : Codewithjoy
//https://www.youtube.com/c/CodeWithJoy

#include <stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d", &a, &b);
    if(a<b)
    {
        for(c=a+1; c<b; c++)
        {
            if(c%5==2 || c%5==3)
                printf("%d\n",c);
        }
    }
    else if(a>b)
    {
        for(c=b+1; c<a; c++)
        {
            if(c%5==2 || c%5==3)
                printf("%d\n",c);
        }
    }
    return 0;
}