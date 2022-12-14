#include<stdio.h>
static int palindrome(int a);
int main()
{
    int t,n,i,j,p,largest=0;
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++)
    {
        scanf("%d",&n);
        for(i=100;i<1000;i++)
        {
            for(j=100;j<1000;j++)
            {
                p=i*j;
                if(palindrome(p) && p>largest && p<n)
                largest=p;
            }
        }
        printf("%d\n",largest);
    }
    return 0;
}
int palindrome(int p)
{
    int r,reverse=0,b;
    b=p;
    while(b>0)
    {
        r=b%10;
        reverse=reverse*10+r;
        b=b/10;
    }
    return reverse==p;
}