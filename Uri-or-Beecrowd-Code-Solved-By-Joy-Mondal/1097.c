//This Code Solved By Joy Mondal (codewithjoymonda) WUB 53A
//If You Want to learn more code visite my youtube channel : Codewithjoy
//https://www.youtube.com/c/CodeWithJoy

#include <stdio.h>
int main()
{
    int I,J,a=7,b;
    for(I=1;I<=9;I=I+2)
    {
        for(b=1,J=a;b<=3;J--,b++)
            printf("I=%d J=%d\n", I, J);
        a=a+2;
    }
    return 0;
}