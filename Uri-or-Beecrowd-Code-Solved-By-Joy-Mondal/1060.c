//This Code Solved By Joy Mondal (codewithjoymonda) WUB 53A
//If You Want to learn more code visite my youtube channel : Codewithjoy
//https://www.youtube.com/c/CodeWithJoy

#include <stdio.h>
int main()
{
    double a,b,c=0;
    for(a=1;a<=6;a++)
    {
        scanf("%lf",&b);
        if(b>0) c++;
    }
    printf("%.0lf valores positivos\n",c);
    return 0;
}