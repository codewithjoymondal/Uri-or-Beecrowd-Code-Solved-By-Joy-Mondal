//This Code Solved By Joy Mondal (codewithjoymonda) WUB 53A
//If You Want to learn more code visite my youtube channel : Codewithjoy
//https://www.youtube.com/c/CodeWithJoy

#include <stdio.h>
int main()
{
    int N[10], a, V;
    scanf("%d", &V);
    for(a=0; a<=9; a++)
    {
        N[a]=V;
        printf("N[%d] = %d\n",a,V);
        V*=2;
    }
    return 0;
}