#include <iostream>

using namespace std;

int main(void)
{
    int n,i;
    char in;
    int s1,s2;

    cin>>s1>>s2;

    if(s1%2==0 || s2%2!=0)
        cout<<"yes";
    else
        cout<<"no";

    return 0;
}
