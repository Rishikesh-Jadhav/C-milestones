#include<stdio.h>
int gcd(int a, int b);

int main()
{
  int num1, num2,result;

  printf("Enter two numbers-  ");
  printf("\nEnter first number:");
  scanf("%d",&num1);
  printf("\nEnter second number:");
  scanf("%d",&num2);

 result = gcd(num1, num2);
  printf("The GCD of %d and %d = %d", num1, num2, result);

  return 0;
}

int gcd(int a, int b)
{
  int x;
  for(int i=1; i<=a && i<=b; i++)
  {
    if(a%i==0 && b%i==0)
    {
      x = i;
    }
  }
  return x;
}