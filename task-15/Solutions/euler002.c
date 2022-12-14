#include<stdio.h>
int main()
{
    int t,n,f1,f2,f3=0,sum; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++)
    {
        scanf("%d",&n);
        f1=1;
        f2=2;
        f3=0;sum=0;
        sum=f2;
        while(f3<n)
        {
            if(f3%2==0)
            sum=sum+f3;
            f3=f1+f2;
            f1=f2;
            f2=f3;
        }
        printf("%d\n",sum);
    }
    return 0;
}
