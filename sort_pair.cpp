#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }

    for (int i = 0; i < n; i++)
    {
        v[i].first *= -1;
    }

    sort(v.begin(), v.end());
    for (auto u : v)
    {
        cout << abs(u.first) << " " << u.second << endl;
    }
    cout << endl;
}