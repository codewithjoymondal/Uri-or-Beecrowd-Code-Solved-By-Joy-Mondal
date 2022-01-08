//This Code Solved By Joy Mondal (codewithjoymonda) WUB 53A
//If You Want to learn more code visite my youtube channel : Codewithjoy
//https://www.youtube.com/c/CodeWithJoy

#include <stdio.h>
int main()
{
  double salary, value, total;
  char name;
  scanf("%s %lf %lf", &name, &salary, &value);

  total = salary+value*.15;
  printf("TOTAL = R$ %.2lf\n", total);
  return 0; 
}