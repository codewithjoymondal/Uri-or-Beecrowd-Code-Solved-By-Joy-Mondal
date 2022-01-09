//This Code Solved By Joy Mondal (codewithjoymonda) WUB 53A
//If You Want to learn more code visite my youtube channel : Codewithjoy
//https://www.youtube.com/c/CodeWithJoy

#include <stdio.h>
int main()
{
    int a,b;
    while(1)
    {
        scanf("%d%d", &a, &b);
        if(a==b)
            break;
        else
        {
            if(a<b)
                printf("Crescente\n");
            else
                printf("Decrescente\n");
        }
    }
    return 0;
}