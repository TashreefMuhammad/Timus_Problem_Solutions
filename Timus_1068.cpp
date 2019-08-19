#include <stdio.h>

int main(void)
{
    int n,sign;
    scanf("%d",&n);
    if(n>0)
        printf("%d",(n*(n+1))>>1);
    else if(n<0)
        printf("%d",-((n*(n-1))>>1)+1);
    else
        printf("1");

    return 0;
}
