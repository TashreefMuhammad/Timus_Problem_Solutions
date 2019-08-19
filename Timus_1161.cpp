#include <stdio.h>
#include <math.h>
#include <queue>

using namespace std;

int main(void)
{
    int n;
    double a,b;
    scanf("%d",&n);
    priority_queue <double> q;
    while(n--)
    {
        scanf("%lf",&a);
        q.push(a);
    }
    while(q.size()>1)
    {
        a=q.top();
        q.pop();
        b=q.top();
        q.pop();
        a=2.0*sqrt(a*b);
        q.push(a);
    }
    printf("%.2lf",q.top());
    return 0;
}
