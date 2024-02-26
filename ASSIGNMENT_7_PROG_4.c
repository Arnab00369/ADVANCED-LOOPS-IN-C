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
      {
        printf("H.C.F. = %d",max);
        break;
      }
    }


    return 0;
}
