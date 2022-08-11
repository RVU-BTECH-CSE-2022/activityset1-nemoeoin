
#include <stdio.h>

float input(char s[])
{
  float x;
  printf("enter %s",s);
  scanf("%f",&x);
  return x;
}

float find_area(float base, float height)
{
  float area=0.5*base*height;
  return area;
}

void output(float base, float height, float area)
{
  printf("the area of the triangle with base=%f and height=%f is %f\n", base,height,area);
}

int main(void)
{
  float base, height, area;
  base=input("base");
  height=input("height");
  area=find_area(base, height);
  output(base,height,area);
  return 0;  
}