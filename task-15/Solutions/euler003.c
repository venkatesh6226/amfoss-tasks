#include<stdio.h>
int main()
{
    int n,t,i,j,count,l=0;
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++)
    {
        scanf("%d",&n);
        for(i=2;i<=n;i++)
        {
            count=0;
            if(n%i==0)
            {
                for(j=1;j<=i;j++)
                {
                    if(i%j==0)
                    count++;
                }
            }
            if(count==2 && i>l)
            l=i;
        }
        printf("%d\n",l);
    }
    return 0;
}