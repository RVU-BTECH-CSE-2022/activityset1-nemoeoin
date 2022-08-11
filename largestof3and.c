#include<stdio.h>

float find_largest (int x, int y, int z)
{
  float c;
  if (x<=y && y>=z) 
    c = y;
  else if (x<=y && y<=z)
    c = z;
  else 
    c = x;
  return c;
}

int main()
{
  float x,y,z;
  printf("Enter the three numbers:\n");
  scanf("%f%f%f", &x, &y, &z);
  float c = find_largest(x,y,z);
  printf("The largest number among %f, %f and %f is %f\n",x,y,z,c);
  return 0;
}