#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int temp;
    int ans=0;
    while(n--)
    {
        cin>>temp;
        if(temp<0)
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}
