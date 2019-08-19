#include <iostream>
#include <stack>

using namespace std;

int main(void)
{
    int n,i;
    stack <char> st;
    cin>>n;
    if(n==0)
        cout<<"10";
    else if(n==1)
        cout<<"1";
    else
    {
        for(i=9; i>1; i--)
            if(n>=i && n%i==0)
            {
                n/=i;
                st.push(i+'0');
                i=10;
            }
        if(n==1)
            while(!st.empty())
            {
                cout<<st.top();
                st.pop();
            }
        else
            cout<<"-1";
    }

    return 0;
}
