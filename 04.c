//check whether a person is a senior citizen or not
#include <stdio.h>
int main()
{
  int age;
  scanf("%d",&age);
  printf("%d\n",age);
  if(age>=0 && age<=150)
  {
  if(age<60)
  printf("You are an Youngest one");
  else
  printf("You are a senior citizen");
  }
}