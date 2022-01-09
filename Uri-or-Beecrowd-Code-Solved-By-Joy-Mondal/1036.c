//This Code Solved By Joy Mondal (codewithjoymonda) WUB 53A
//If You Want to learn more code visite my youtube channel : Codewithjoy
//https://www.youtube.com/c/CodeWithJoy

#include <stdio.h>
int main()
{
    double A,B,C,d,e,f,g;
    scanf ("%lf%lf%lf", &A,&B,&C);
    d=B*B-4*A*C;
    e=pow(d,.5);
    if(d<0||A==0)
        printf ("Impossivel calcular\n");
    else
    {
        f=(-B+e)/(2*A);
        g=(-B-e)/(2*A);
        printf ("R1 = %.5lf\n",f);
        printf ("R2 = %.5lf\n",g);
    }
    return 0;
}