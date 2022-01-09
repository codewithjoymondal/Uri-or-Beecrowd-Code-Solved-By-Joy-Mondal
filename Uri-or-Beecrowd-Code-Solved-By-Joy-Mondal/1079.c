//This Code Solved By Joy Mondal (codewithjoymonda) WUB 53A
//If You Want to learn more code visite my youtube channel : Codewithjoy
//https://www.youtube.com/c/CodeWithJoy

#include <stdio.h>
int main()
{
    double a,b,c,d,x;
    int N;
    scanf("%d", &N);
    for(a=1;a<=N;a++)
    {
        scanf("%lf%lf%lf",&x,&b,&c);
        d=((x/5.0)+((b*3.0)/10.0)+(c/2.0));
        printf ("%.1lf\n",d);
    }
    return 0;
}