#include <stdio.h>
//Q12
/*
int main()
{
  int a,b,addition,subtraction,multiply;
  float division;
  printf("enter two numbers: ");
  scanf("%d%d",&a,&b);
  addition = a+b;
  subtraction = a-b;
  multiply = a*b;
  division = a/(float)b;
  printf("addition = %d\n",addition);
  printf("subtraction = %d\n",subtraction);
  printf("multiply = %d\n",multiply);
  printf("dividsion = %f\n",division);

  return 0;
}
*/
//qAa
/*
int main()
{
    int a;
    printf("enter sides");
    scanf("%d",&a);
    printf("area is %d",a*a);
    printf("\n");
    return 0;
}
*/
//Qb
/*
int main()
{
    int l,b;
    printf("enter length and breadth");
    scanf("%d%d",&l,&b);
    printf("area of rectangle=%d",l*b);
}
*/
//Q2
int q()
{
    int i=1,x=1,n;
    printf("enter a number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        x=x*i;
     
     i++;
    }
     printf("factorial is = %d",x);
}
