//This Code Solved By Joy Mondal (codewithjoymonda) WUB 53A
//If You Want to learn more code visite my youtube channel : Codewithjoy
//https://www.youtube.com/c/CodeWithJoy

#include <stdio.h>
int main()
{
    double a,b,c,d,x1,x2,y1,y2;
    scanf ("%lf%lf", &x1, &y1);
    scanf ("%lf%lf", &x2, &y2);
    a=(x2-x1)*(x2-x1);
    b=(y2-y1)*(y2-y1);
    c=a+b;
    d=pow(c,.5);
    printf ("%.4lf\n",d);
    return 0;
}