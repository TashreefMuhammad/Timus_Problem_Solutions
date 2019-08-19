#include <stdio.h>
#include <algorithm>

using namespace std;

int main(void)
{
    int n,i,people=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    for(i=0;i<(n/2)+1;i++)
        people+=(a[i]/2)+1;
    printf("%d",people);
    return 0;
}
