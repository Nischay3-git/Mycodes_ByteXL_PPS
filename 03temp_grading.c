//categorize the input temperature using the table provided
#include <stdio.h>
int main()
{
  float temp;
  scanf("%f",&temp);
  
  
    if(temp < 0) {
    printf("The temperature is Freezing.\n");
    }
    else if(temp>=0 && temp<=20) {
    printf("The temperature is Cold.\n");
    }
    else if(temp>20 && temp<=35) {
    printf("The temperature is Normal.\n");
    }
    else if(temp > 35)
    {
    printf("The temperature is Hot.\n");
    }
  return 0;
}
