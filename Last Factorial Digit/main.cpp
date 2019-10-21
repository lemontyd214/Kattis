#include <iostream>

using namespace std;

int main()
{
    int T;
    int num;
    int ans;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        ans=1;
        cin>>num;
        for(int k=1;k<=num;k++)
            ans=(ans*k)%10;
        cout<<ans%10<<endl;
    }
    return 0;
}
