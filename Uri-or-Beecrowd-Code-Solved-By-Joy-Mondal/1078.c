//This Code Solved By Joy Mondal (codewithjoymonda) WUB 53A
//If You Want to learn more code visite my youtube channel : Codewithjoy
//https://www.youtube.com/c/CodeWithJoy

#include <stdio.h>
int main()
{
    int N,a,b;
    scanf("%d", &N);
    for(a=1;a<=10;a++)
    {
        b=a*N;
        printf("%d x %d = %d\n",a,N,b);
    }
    return 0;
}