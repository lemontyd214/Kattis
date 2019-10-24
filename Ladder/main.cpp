#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int h,v;
    cin>>h>>v;
    cout<<ceil(h/sin(M_PI*v/180.0))<<endl;
    return 0;
}
