#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    int N,W,H;
    int len;
    double fit;
    cin>>N>>W>>H;
    fit = sqrt(W*W + H*H);
    for(int i=0;i<N;i++)
    {
        cin>>len;
        if(len<=fit)
            cout<<"DA"<<endl;
        else
            cout<<"NE"<<endl;
    }
    return 0;
}
