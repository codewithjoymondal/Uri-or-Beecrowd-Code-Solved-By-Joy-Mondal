//This Code Solved By Joy Mondal (codewithjoymonda) WUB 53A
//If You Want to learn more code visite my youtube channel : Codewithjoy
//https://www.youtube.com/c/CodeWithJoy

#include <stdio.h>
int main()
{
     int a, b;
     double c, res;
     scanf("%d %d %lf", &a, &b, &c);
     res = b * c;
     scanf("%d %d %lf", &a, &b, &c);
     res += b * c;
     printf("VALOR A PAGAR: R$ %.2lf\n", res);
     return 0;
}