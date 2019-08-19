#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int main(void)
{
    int n,i;
    char in;
    string s;
    vector <char> c[26];
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>s;
        c[s[0]-'a'].push_back(s[1]);
    }

    cin>>in;

    n=c[in-'a'].size();

    for(i=0;i<n;i++)
        cout<<in<<c[in-'a'][i]<<"\n";

    return 0;
}
