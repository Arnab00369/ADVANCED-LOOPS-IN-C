#include <stdio.h>
#include <math.h>
void main()
{
    int n,c=0,s=0;
    printf("Enter a Number to check whether it is a Armstrong Number or not ::\nNumber = ");
    scanf("%d",&n);
    int n1=n,n2=n1;
    while(n>0)
    {
        ++c;
        n/=10;
    }
    printf("The number of Digits is %d is = %d",n1,c);
    while(n1>0)
    {
        s+=pow((n1%10),c);
        n1/=10;
    }
    if(s==n2)
        printf("\n%d is an Armstrong Number",s);
    else
        printf("\n%d is not an Armstrong Number",n2);
    getch();
}
