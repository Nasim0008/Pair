#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >>n>>k;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(v.rbegin(),v.rend());

    for (int i = 0; i < n; i++)
    {
        v[i].second*= -1;
    }

   //sort(v.begin(), v.end());

    cout<<endl;
    for (auto u : v)
    {
        cout << (u.first) << " " << abs(u.second) << endl;
    }
    cout << endl;
}