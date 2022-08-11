#include <stdio.h>

float input(char chr[])
{
  float m;
  printf("%s",chr);
  scanf("%f",&m);
  return m;
}

float find_largest(int x, int y, int z)
{
  float l;
  if(x>=y)
    l=x;
  if (x<y)
    l=y;
  if (l<z)
    l=z;
  return l;
}

float output(float x, float y, float z, float l)
{
  printf("largest number between %f, %f and %f is %f",x,y,z,l);
  return 0;
}

int main()
{
  float x,y,z;
  printf("enter the three numbers:\n");
  x=input("1st no:");
  y=input("2nd no:");
  z=input("3rd no:");
  float l=find_largest(x,y,z);
  output(x,y,z,l);
  return 0;
}