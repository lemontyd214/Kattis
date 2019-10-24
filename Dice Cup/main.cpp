#include <iostream>

using namespace std;

int main()
{
    int N,M;
    int max_possibility=0;
    cin>>N>>M;
    int possibility[50]={0};
    for(int i=1;i<=N;i++)
        for(int j=1;j<=M;j++)
            possibility[i+j]++;
    for(int i=2;i<=N+M;i++)
        if(possibility[i]>max_possibility)
            max_possibility=possibility[i];
    for(int i=2;i<=N+M;i++)
        if(possibility[i]==max_possibility)
            cout<<i<<endl;
    return 0;
}
