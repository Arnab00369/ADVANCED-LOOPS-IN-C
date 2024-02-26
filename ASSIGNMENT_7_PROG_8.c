#include <stdio.h>
void main()
{
    int n,c=0;
    printf("Enter a Number to find it's next Prime Number = ");
    scanf("%d",&n);
    int n1=n;
    n++;
    while(n>0)
    {
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
                c++;
        }
        if(c==2)
            break;
        else
        {
            n++;
            c=0;
        }
    }
    printf("%d's Next Prime Number is = %d",n1,n);
    getch();
}
