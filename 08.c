

#include <stdio.h>
int main()
{
  int n; //n=number of units consumed
  float amt;
  scanf("%d",&n);
  
  if(n>=0 && n<=100000)
  {
    if(n<=40)
    { 
      amt+=0.33*n;
    }
    else if(n>40 && n<=110)
    {
      amt+= 0.50*(n-40) + 0.33*40;
    }
    else if(n>110 && n<=210)
    {
      amt+= 0.70*(n-110) + 0.50*70 + 0.33*40;
    }
    else
    {
      amt+= 1.50*(n-210) + 0.70*210 + 0.50*70 + 0.33*40;
    }
  printf("Rs. %.2f",amt + (0.20*amt));
  }
}