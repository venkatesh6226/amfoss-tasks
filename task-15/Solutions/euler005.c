#include<stdio.h>
int main()
{
    int t,i,j,count,n;
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++)
    {
        scanf("%d",&n);
        for (i=1;i<1000000000;i++)
        {
            count=0;
            for (j=1;j<=n;j++)
            {
                if (i%j==0)
                count++;
            }
            if (count==n)
            {
                printf("%d\n",i);
                break;
            }
        }
    }
    return 0;
}