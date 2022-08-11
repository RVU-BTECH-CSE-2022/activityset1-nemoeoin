#include <stdio.h>
/* Find area of a triangle taking user input*/

int main(void)
{
  float base, altitude, area;
  printf("Enter base and altitude\n");
  scanf("%f%f", &base, &altitude);
  area = 1.0/2*base*altitude;
  printf("the area of a triangle with %f as base and %f as altitude is %f\n", base, altitude, area);
  return 0;
}