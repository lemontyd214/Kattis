#include <iostream>
#include<map>
#include<cstring>
using namespace std;

int main()
{
    int T;
    cin>>T;
    int n;
    string s;
    int num;
    map<string, bool> visited;
    while(T--)
    {
        num=0;
        visited.clear();
        cin>>n;
        while(n--)
        {
            cin>>s;
            if(visited[s]==false)
                num++;
            visited[s]=true;
        }
        cout<<num<<endl;
    }
    return 0;
}
