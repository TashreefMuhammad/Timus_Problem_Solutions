#include <iostream>
#include <iomanip>
#include <math.h>
#include <stack>

using namespace std;

int main(void)
{
    unsigned long long n;
    stack <unsigned long long> st;
    while(cin>>n)
        st.push(n);
    cout<<setprecision(4)<<fixed;
    while(!st.empty())
    {
        cout<<sqrt(st.top())<<"\n";
        st.pop();
    }

    return 0;
}
