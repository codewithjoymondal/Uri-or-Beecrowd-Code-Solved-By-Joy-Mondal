//This Code Solved By Joy Mondal (codewithjoymonda) WUB 53A
//If You Want to learn more code visite my youtube channel : Codewithjoy
//https://www.youtube.com/c/CodeWithJoy

#include <stdio.h>
int main()
{
    int x=0,a,b,c,e,d=0;
    for(a=1;a<=100;a++)
    {
        scanf("%d", &b);
        x++;
        if(b>d)
        {
            e=x;
            d=b;
        }
    }
    printf("%d\n",d);
    printf("%d\n",e);
    return 0;
}