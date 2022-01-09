//This Code Solved By Joy Mondal (codewithjoymonda) WUB 53A
//If You Want to learn more code visite my youtube channel : Codewithjoy
//https://www.youtube.com/c/CodeWithJoy
#include <stdio.h>
int main()
{
    int x;
    while(1)
    {
        scanf("%d", &x);
        if(x==2002)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else
            printf("Senha Invalida\n");
    }
    return 0;
}