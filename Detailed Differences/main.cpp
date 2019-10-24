#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s1,s2;
    string diff;
    while(n--)
    {
        diff="";
        cin>>s1>>s2;
        for(int i=0;i<s1.length();i++)
        {
            if(s1[i]==s2[i])
                diff+=".";
            else
                diff+="*";
        }
        cout<<s1<<endl;
        cout<<s2<<endl;
        cout<<diff<<endl;
    }
    return 0;
}
