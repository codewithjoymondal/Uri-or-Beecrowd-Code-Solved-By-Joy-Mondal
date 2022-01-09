//This Code Solved By Joy Mondal (codewithjoymonda) WUB 53A
//If You Want to learn more code visite my youtube channel : Codewithjoy
//https://www.youtube.com/c/CodeWithJoy

#include <stdio.h>
int main()
{
    double A,B,C,D,E,F,G,H;
    scanf ("%lf %lf %lf", &A, &B, &C);
    D=.5*A*C;
    E=3.14159*C*C;
    F=.5*(A+B)*C;
    G=B*B;
    H=A*B;
    printf ("TRIANGULO: %.3lf\n", D);
    printf ("CIRCULO: %.3lf\n", E);
    printf ("TRAPEZIO: %.3lf\n", F);
    printf ("QUADRADO: %.3lf\n", G);
    printf ("RETANGULO: %.3lf\n", H);
    return 0;
}