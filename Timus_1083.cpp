#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
    long long n,l,last,out=1,i=0;
    string k;
    cin>>n>>k;
    l=k.size();
    if(n%l!=0)
        last=n%l;
    else
        last=l;
    while(n-i*l>last)
    {
        out*=(n-i*l);
        i++;
    }
    cout<<out*last;
    return 0;
}
