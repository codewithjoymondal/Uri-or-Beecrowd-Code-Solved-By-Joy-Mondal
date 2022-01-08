//This Code Solved By Joy Mondal (codewithjoymonda) WUB 53A
//If You Want to learn more code visite my youtube channel : Codewithjoy
//https://www.youtube.com/c/CodeWithJoy

# include <stdio.h>
int main(){
     int NUMBER,hours;
     float amount,SALARY;
     scanf("%d %d %f", &NUMBER, &hours, &amount);
     SALARY = hours * amount;
     printf("NUMBER = %d\n",NUMBER);
     printf("SALARY = U$ %0.2f\n", SALARY);//SALARY = U$ 4100.00  
     return 0;
}