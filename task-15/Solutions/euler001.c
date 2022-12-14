#include <stdio.h>
int main(){
    int t,i,sum=0; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++)
    {
        int N; 
        scanf("%d",&N);
        sum=0;
        for(i=0;i<N;i++)
        {
        if(i%3==0 || i%5==0)
        sum=sum+i;
        }
    printf("%d\n",sum);
    }
    return 0;
}