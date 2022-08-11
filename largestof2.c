#include <stdio.h>

int input()
{
  int a;
  printf("enter a number");
  scanf("%d",&a);
  return a;
}

int find_largest(int a,int b)
{
  int c;
  if(a<b)
    c=b;
  else
    c=a;
  return c;
}

int output(int a,int b,int c)
{
  printf("largest of %d and %d is %d",a,b,c);
}

int main()
{
  int a,b,c;
  a=input();
  b=input();
  c=find_largest(a,b);
  output(a,b,c);
}