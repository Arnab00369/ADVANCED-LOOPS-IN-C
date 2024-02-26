#include <stdio.h>
int main()
{
    int n,c=2,a=0,b=1,fib=0;
    printf("Enter upto which term you want to print the Fibonacci Series ::\nN = ");
    scanf("%d",&n);
    if(n==1)
    {
        printf("Therefore, the First Term of Fibonacci Series is = 0");
        exit(0);
    }
    else if(n==2)
    {
        printf("Therefore, the First %d Terms of Fibonacci Series is = 0 1",n);
        exit(0);
    }
    printf("The First %d Terms of Fibonacci Series are = 0 1 ",n);
    while(1)
    {
      fib=a+b;
      a=b;
      b=fib;
      printf("%d ",fib);
      c++;
      if(c==n)
        break;
    }
    return 0;
}
