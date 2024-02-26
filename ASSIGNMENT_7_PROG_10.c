#include <stdio.h>
#include <math.h>
void main()
{
    int n1,n2,s=0,c=0;
    printf("The all possible Armstrong numbers under 1000 are as follows ::\n");
    for(int n=1;n<1000;n++)
    {
        n1=n;
        while(n!=0)
        {
            ++c;
            n=n/10;
        }
        n=n1;
        s=pow(n%10,c)+pow(((n%100)-(n%10))/10,c)+pow(((n%1000)-(n%100))/100,c);
        if(s==n1)
        {
            printf("%d ",n1);
        }
        c=0;
    }
    getch();
}

