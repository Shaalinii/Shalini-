#include <stdio.h>
int main(void) 
{
  int a;
  scanf("%d",&a);
  if(a%2==0)
  {
    printf("Even",a);
  }
  else if(a%2<0)
  printf("invalid");
  else
  {
    printf("Odd",a);
  }
return 0;
}
