//This Code Solved By Joy Mondal (codewithjoymonda) WUB 53A
//If You Want to learn more code visite my youtube channel : Codewithjoy
//https://www.youtube.com/c/CodeWithJoy

#include <stdio.h>
int main()
{
    int a,b;
    scanf ("%d%d", &a, &b);
    if(a==b)
        printf("O JOGO DUROU %d HORA(S)\n",24-a+b);
    else if(a<=b)
        printf ("O JOGO DUROU %d HORA(S)\n",b-a);
    else
        printf("O JOGO DUROU %d HORA(S)\n",24-a+b);
    return 0;
}