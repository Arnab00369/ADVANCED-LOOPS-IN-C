#include <stdio.h>
void main()
{
    int n,s=0,n1,c=0,d=0;;
    printf("Enter a Decimal Number to Convert into Binary = ");
    scanf("%d",&n);
    n1=n;
    while(n!=0)
    {
        s=s*10+(n%2);
        n/=2;
    }
    n=n1;
    while(s!=0)
    {
        if(s%10==1)
        {
            d++;
            break;
        }
        else
            d++;
            s/=10;
    }
    while(n!=0)
    {
        if(n%2==1)
        {
            c++;
            break;
        }
        else
            c++;
        n/=2;
    }
        printf("The position of First 1 in LSB is = %d\nAnd, the position of First 1 in MSB is = %d",d,c);

    getch();
}
