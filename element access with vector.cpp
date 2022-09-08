#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<string,vector<int>>p;
    p.first="Nasim";
    p.second={10,20,30,60,50,40};
    cout<<p.first<<endl;
    for(auto u:p.second)
    {
        cout<<u<<" ";
    }
    cout<<endl;
}
