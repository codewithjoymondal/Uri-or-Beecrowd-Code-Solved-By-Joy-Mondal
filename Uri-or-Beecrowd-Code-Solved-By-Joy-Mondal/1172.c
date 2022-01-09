//This Code Solved By Joy Mondal (codewithjoymonda) WUB 53A
//If You Want to learn more code visite my youtube channel : Codewithjoy
//https://www.youtube.com/c/CodeWithJoy

#include <stdio.h>
int main()
{
    int N[10], temp,i,j;
    for(i=0; i<10; i++)
        scanf("%d",&N[i]);
    for(i=0; i<10; i++)
    {
        if(N[i]<=0)
            N[i]=1;
    }
    for(i=0; i<10; i++)
        printf("X[%d] = %d\n",i,N[i]);
    return 0;
}