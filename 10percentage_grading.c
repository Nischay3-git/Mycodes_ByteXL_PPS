
#include <stdio.h>
int main()
{ float Percentage;
  int m1,m2,m3,m4;
  scanf("%d",&m1);
  scanf("%d",&m2);
  scanf("%d",&m3);
  scanf("%d",&m4);
  
  if(m1>=0 && m1<=1000 && m2>=0 && m2<=1000 && m3>=0 && m3<=1000 && m4>=0 && m4<=1000 )
  { Percentage=(m1+m2+m3+m4)/4.0;
    printf("%.2f \n",Percentage);
    
    if(Percentage>=90.0)
    {
      printf("You got a A+ grade");
    }
    else if(Percentage>=80.0 && Percentage<90.0)
    {
      printf("You got a A grade");
    }
    else if(Percentage>=70.0 && Percentage<80.0)
    {
      printf("You got a B grade");
    }
    else if(Percentage>=60.0 && Percentage<70.0)
    {
      printf("You got a C grade");
    }
    else if(Percentage>=50.0 && Percentage<60.0)
    {
      printf("You got a D grade");
    }
    else if(Percentage>=40.0 && Percentage<50.0)
    {
      printf("You got a E grade");
    }
  }
  return 0;
}
