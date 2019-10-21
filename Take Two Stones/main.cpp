#include <iostream>

using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin>>N;
    if(N % 2 == 0)
        cout<<"Bob"<<endl;
    else
        cout<<"Alice"<<endl;
    return 0;
}
