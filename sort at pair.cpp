#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<string,int>>v(n);
    for(auto u:v)
    {
        cin>>u.first>>u.second;
    }
        for(auto u:v)
        {
            cout<<u.first<<" "<<u.second;
            cout<<endl;
        }

}
