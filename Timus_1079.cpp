#include <stdio.h>

unsigned long dp[100000];

unsigned long sqe(unsigned long n);

int main(void)
{
    unsigned long n,i,j,maxout;
    while(1)
    {
        scanf("%lu",&n);
        if(n==0)
            break;
        maxout=0;
        for(i=n;i>0;i--)
        {
            j=i;
            j=sqe(j);
            if(j>maxout)
                maxout=j;
        }
        printf("%lu\n",maxout);
    }
    return 0;
}

unsigned long sqe(unsigned long n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else if(dp[n]!=0)
        return dp[n];
    else
    {
        if(n%2==0)
            return dp[n]=sqe(n/2);
        else
            return dp[n]=sqe((n-1)/2)+sqe(((n-1)/2)+1);
    }
}
