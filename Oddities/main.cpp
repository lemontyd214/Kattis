#include <iostream>

using namespace std;

int main()
{
    int N;
    int num;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>num;
        if(num%2==0)
            cout<<num<<" is even"<<endl;
        else
            cout<<num<<" is odd"<<endl;
    }
    return 0;
}
