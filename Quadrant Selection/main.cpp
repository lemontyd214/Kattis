#include <iostream>

using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    int x,y;
    cin>>x>>y;
    if(x>0 && y>0)
        cout<<1<<endl;
    else if(x<0 && y>0)
        cout<<2<<endl;
    else if(x<0 && y<0)
        cout<<3<<endl;
    else
        cout<<4<<endl;
    return 0;
}