#include <iostream>

using namespace std;

int main()
{
    int ans=0;
    int num=0;
    int a,b,c,d;
    for(int i=1;i<=5;i++)
    {
        cin>>a>>b>>c>>d;
        if(a+b+c+d>ans)
        {
            ans=a+b+c+d;
            num=i;
        }
    }
    cout<<num<<" "<<ans<<endl;
    return 0;
}
