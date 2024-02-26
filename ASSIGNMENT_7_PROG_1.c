#include <stdio.h>
int main()
{
    int n,c=2,a=0,b=1,fib=0;
    printf("Enter which term of Fibonacci Series you want to find ::\nNth Term = ");
    scanf("%d",&n);
    if(n==1)
    {
        printf("Therefore, %dst Term of Fibonacci Series is = 0",n);
        exit(0);
    }
    else if(n==2)
    {
        printf("Therefore, %dnd Term of Fibonacci Series is = 1",n);
        exit(0);
    }
    while(1)
    {
      fib=a+b;
      a=b;
      b=fib;
      c++;
      if(c==n)
        break;
    }


        printf("Therefore, %dth Term of Fibonacci Series is = %d",n,fib);
    return 0;
}
