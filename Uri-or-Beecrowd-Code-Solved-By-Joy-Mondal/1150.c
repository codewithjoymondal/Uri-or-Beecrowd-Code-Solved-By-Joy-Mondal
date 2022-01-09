//This Code Solved By Joy Mondal (codewithjoymonda) WUB 53A
//If You Want to learn more code visite my youtube channel : Codewithjoy
//https://www.youtube.com/c/CodeWithJoy

#include <stdio.h>
int main()
{
    int a,b,c=0,x,z;
    scanf("%d", &x);
    do{
        scanf("%d", &z);
    }
    while(x>=z);
    for(a=x,b=0; b<z; a++)
    {
        b+=a;
        c++;
    }
    printf("%d\n", c);
    return 0;
}