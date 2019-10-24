#include <iostream>

using namespace std;

int main()
{
    int A,B;
    int A_rev=0;
    int B_rev=0;
    cin>>A>>B;
    while(A!=0)
    {
        A_rev=A_rev*10+A%10;
        B_rev=B_rev*10+B%10;
        A/=10;
        B/=10;
    }
    cout<<max(A_rev,B_rev)<<endl;
    return 0;
}
