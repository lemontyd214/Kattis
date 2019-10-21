#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    double ans=0.0;
    int num;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>num;
        ans+=pow((double)(num/10), (double)(num%10));
    }
    cout<<(int)ans<<endl;
    return 0;
}
