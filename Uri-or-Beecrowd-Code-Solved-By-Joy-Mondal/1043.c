//This Code Solved By Joy Mondal (codewithjoymonda) WUB 53A
//If You Want to learn more code visite my youtube channel : Codewithjoy
//https://www.youtube.com/c/CodeWithJoy
#include <stdio.h>
int main()
{
    double A,B,C,D;
    scanf ("%lf%lf%lf", &A, &B, &C);
    if(A<B+C&&B<A+C&&C<A+B)
        printf("Perimetro = %.1lf\n", A+B+C);
    else
    {
        D=.5*(A+B)*C;
        printf("Area = %.1lf\n",D);
    }
    return 0;
}