#include <stdio.h>
void main()
{
    printf("The Prime Number under 100 are as follows ::\n");
    for(int n=1;n<100;n++)
    {
        int i,c=0;
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
                c++;
        }
        if(c==2)
            printf("%d ",n);
        else
            continue;
        c=0;
    }
    getch();
}
