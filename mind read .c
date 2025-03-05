#include<stdio.h>

int main()
{
    double number;
    double ans;
    
    printf(" I AM GONNA READ YOUR MIND \n ");
    printf(" THINK NO BETWEEN 1 TO 10 = ");
    scanf("%lf", &number);
    while (number >= 10 )
    {
      printf("Choose between 1 to 10 \n");
      printf(" THINK NO BETWEEN 1 TO 10 = ");
      scanf("%lf", &number);
    }
    ans = number ;
    printf("ANS = %lf ", ans);
    
    
    
    return 0;
}