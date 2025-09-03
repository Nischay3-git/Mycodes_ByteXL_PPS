//greatest of three numbers
#include <stdio.h>
int main()
{
  int a,b,c;
  scanf("%d",&a);
  scanf("\n%d",&b);
  scanf("\n%d",&c);
  
  if(a>b && a>c)
  printf("%d is the greatest of the given three numbers.",a);
  else
  {
    if(b>a && b>c)
    printf("%d is the greatest of the given three numbers.",b);
    else
    printf("%d is the greatest of the given three numbers.",c);
  }
  return 0;
}
