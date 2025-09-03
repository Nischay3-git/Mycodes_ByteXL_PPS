//check whether the length and breadth make up a square or a rectangle
#include <stdio.h>
int main()
{
  float l,b;
  
  scanf("%f",&l);
  scanf("%f",&b);
  
  if(l==b)
  {
    printf("It is a square");
  }
  else
  printf("It is not a square, It forms a rectangle");
  
}
