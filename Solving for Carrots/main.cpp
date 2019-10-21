#include <iostream>

using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    int N,P;
    string s;
    cin>>N>>P;
    for(int i=0;i<N;i++)
        cin>>s;
    cout<<P<<endl;
    return 0;
}
