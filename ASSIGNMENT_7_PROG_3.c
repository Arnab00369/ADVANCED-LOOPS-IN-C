#include <stdio.h>
int main()
{
    int n,c=2,a=0,b=1,fib=0;
    printf("Enter a Number to search in the Fibonacci Series ::\nN = ");
    scanf("%d",&n);
    if(n==0)
    {
        printf("Therefore, the Number %d is present in Fibonacci Series",n);
        exit(0);
    }
    else if(n==1)
    {
        printf("Therefore, the Number %d is present in Fibonacci Series",n);
        exit(0);
    }
    printf("\nThe Fibonacci Series = 0 1 ");
    while(fib<n)
    {
      fib=a+b;
      a=b;
      b=fib;
      printf("%d ",fib);
      //if(fib==n)
        //break;
    }
    if(fib==n)
    printf("\nTherefore, the Number %d is present in Fibonacci Series",n);
    else
    printf("\nTherefore, the Number %d is not present in Fibonacci Series",n);
    return 0;
}

