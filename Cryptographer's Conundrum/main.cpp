#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int ans=0;
    for(int i=0;i<s.length();i+=3)
        if(s[i]!='P')
            ans++;
    for(int i=1;i<s.length();i+=3)
        if(s[i]!='E')
            ans++;
    for(int i=2;i<s.length();i+=3)
        if(s[i]!='R')
            ans++;
    cout<<ans<<endl;
    return 0;
}
