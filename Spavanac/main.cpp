#include <iostream>

using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    int H, M;
    cin>>H>>M;
    if(M>=45)
    {
        cout<<H<<" "<<M-45<<endl;
    }
    else
    {
        M=M+15;
        if(H>0)
            H-=1;
        else
            H=23;
        cout<<H<<" "<<M<<endl;
    }
    return 0;
}
