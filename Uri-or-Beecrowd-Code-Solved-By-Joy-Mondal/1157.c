//This Code Solved By Joy Mondal (codewithjoymonda) WUB 53A
//If You Want to learn more code visite my youtube channel : Codewithjoy
//https://www.youtube.com/c/CodeWithJoy

#include<stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        if(N%i==0)
            printf("%d\n",i);
    }

    return 0;

}
