#include <iostream>

using namespace std;

int main()
{
    double c;
    int L;
    double w,l;
    double ans=0;
    cin>>c>>L;
    for(int i=0;i<L;i++)
    {
        cin>>w>>l;
        ans+=w*l;
    }
    cout.precision(10);
    cout<<ans*c<<endl;
    return 0;
}
