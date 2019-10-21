#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin>>N;
    cout<<(int)(pow(2, N)+1) * (int)(pow(2, N)+1)<<endl;
    return 0;
}
