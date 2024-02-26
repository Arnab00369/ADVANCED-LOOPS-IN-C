#include <stdio.h>
int main()
{
    int a,b,max,min,r;
    printf("Enter two numbers ::\nA = ");
    scanf("%d",&a);
    printf("B = ");
    scanf("%d",&b);
    max=(a>b)?a:b;
    min=(a<b)?a:b;
    while(1)
    {
      r=max%min;
      max=min;
      min=r;
      if(r==0)
      break;
    }
    if(max==1)
        printf("%d and %d are Co-Prime Numbers",a,b);
    else
         printf("%d and %d are not Co-Prime Numbers",a,b);
    return 0;
}

