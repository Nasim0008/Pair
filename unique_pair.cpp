#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i].first<< " "<<v[i].second<<endl;
    }
    sort(v.begin(),v.end());
    int sz = unique(v.begin(),v.end())-v.begin();
    for(int i=0;i<sz;i++)
    {
        cout<<v[i].first<< " "<<v[i].second<<endl;
    }
}