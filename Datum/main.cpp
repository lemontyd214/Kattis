#include <iostream>

using namespace std;

int main()
{
    int D,M;
    cin>>D>>M;
    int day=0;
    int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    for(int i=1;i<M;i++)
    {
        day+=days[i-1];
    }
    day+=D;
    if(day%7==0)    cout<<"Wednesday"<<endl;
    if(day%7==1)    cout<<"Thursday"<<endl;
    if(day%7==2)    cout<<"Friday"<<endl;
    if(day%7==3)    cout<<"Saturday"<<endl;
    if(day%7==4)    cout<<"Sunday"<<endl;
    if(day%7==5)    cout<<"Monday"<<endl;
    if(day%7==6)    cout<<"Tuesday"<<endl;
    return 0;
}
