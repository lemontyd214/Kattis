#include <iostream>

using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    double q,y;
    double ans=0;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>q>>y;
        ans+=q*y;
    }
    cout<<ans<<endl;
    return 0;
}
