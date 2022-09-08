#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,int>>v;
    v.push_back({5,5});
    v.push_back({9,8});
    v.push_back({12,98});
    v.push_back({56,74});
    v.push_back({1,3});
    v.push_back({85,65});
    v.push_back({5,36});
    v.push_back({5,8});
    sort(v.begin(),v.end());

    for(auto u:v)
    {
        cout<<u.first<<" "<<u.second<<endl;
    }

}
