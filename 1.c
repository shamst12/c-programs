#include<stdio.h>
//Q1
/*
int main()
{
    int a,b,c;
    printf("enter two numbers: ");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("sum is= %d",c);
    printf("\n");
    return 0;
}
*/
//Q2
/*
int main()
{
    char ch;
    printf("enter a alphabet");
    scanf("%c",&ch);
    printf("%c%d",ch,ch);

}
*/
//Q3
/*
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    if(a%2==0)
    printf("Even number");
    else
    printf("Odd number");
}
*/
//Q4
/*
int main()
{
    int a,f=1;
    printf("enter a number");
    scanf("%d",&a);
    while(a)
    {
      f=a*f;
      a--;
    }
    printf("factorial is = %d",f);
}
*/
//Q5
/*
int main()
{
 for( int row=1;row<=5;row++)
 {
    for(int col=1;col<=row;col++)
    {
      printf("%d",col);
    }
    printf("\n");
 }
 
}
*/
//6
/*
int main()
{
    int x,y,product=0;
    printf("enter two numbers");
    scanf("%d%d",&x,&y);
    while(y!=0)
    {
       product += x;
       y--;
    }
    printf("\nproduct = %d",product);
    return 0;
}
*/
//Q7
/*
int main()
{
  int a,b,c;
  printf("enter a number: ");
  scanf("%d%d",&a,&b);
   c=a+b;
   b=a;
   a=c-a;
   printf("%d %d",a,b);
}
*/
//8
/*
int main()
{
    int a,i;
    printf("enter a number");
    scanf("%d",&a);
    for(i=2;i<=a-1;i++)
    {
    if(a%i==0)
    break;
    }
    if(i==a)
    printf("Prime number");
    else
    printf("Not Prime number");
}
*/
//Q9
/*
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    if(a%100==0)
     
        if(a%400==0)
     printf("A Leap year");
     else 
     printf(" Not Leap year");
     
     if(a%4==0)
     printf("Leap year");
     else
     printf("Not Leap year");
}
*/
//Q10

int main()
{
    int i,s=0,n;
    printf("enter a number");
    scanf("%d",&n);
    while(n>=0)
    {
        i=n%10;
        s=s+i;
    }
    printf("sum of digits = %d",s);

    printf("\n");
    return 0;
    
}