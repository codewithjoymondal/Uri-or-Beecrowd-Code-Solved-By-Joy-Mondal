//This Code Solved By Joy Mondal (codewithjoymonda) WUB 53A
//If You Want to learn more code visite my youtube channel : Codewithjoy
//https://www.youtube.com/c/CodeWithJoy

#include <stdio.h>

int main() {
    double x,y=1,z,s=0;
    for(x=1;x<=100;x++)
    {
        z=1/x;
        s+=z;
    }
    printf("%.2lf\n",s);
    return 0;
}