#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<string,int>>v;
    v.push_back({"Nasim",5});
    v.push_back({"Mona",49});
    v.push_back({"ayesha",67});
    v.push_back({"balika",54});
    v.push_back({"Bonni",54});

    sort(v.begin(),v.end());
    for(auto u:v)
    {
        cout<<u.first<< " "<<u.second;
        cout<<endl;
    }
}
