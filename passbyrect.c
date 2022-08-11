#include <stdio.h>

void input (float *l,float *b)  //using pointer
{
  printf("enter the length and breadth:\n");
  scanf("%f%f",l,b);
}

void areaofrect (float l,float b,float *a)
{
  *a=l*b;
}

void output (float a)
{
  printf("the area of the rectangle is %f\n",a);
  return;
}

// &a - address of a
// *a - pointing a to whatever address

int main()
{
  float l,b,a;
  input(&l,&b);
  areaofrect(l,b,&a);
  output(a);
  return 0;
}