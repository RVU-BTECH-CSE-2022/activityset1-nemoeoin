#include <stdio.h>
#include <stdlib.h>

int input(int *n)
{
  printf("enter the number of elements of the string:");
  scanf("%d",&n);
  
}
char inputstr(char s[])
{
  printf("enter the string:");
    {
  scanf("%s",s);
      }
}
int compare(char s1[],char s2[])
{
  for(int i=0;i<20;i++)
  {
  if((s1[i]>s2[i])&(s1[i]&s2[i]>0))
  {
    printf("the largest string is %s:",s1);
    exit(0);
  }
    else
  {
    printf("the largest string is %s:",s2);
    exit(0);
    }
    }
  }
void main()
{
  int *n;
  input(&n);
  char s1[20],s2[20];
  inputstr(s1);
  inputstr(s2);
  compare(s1,s2);
}