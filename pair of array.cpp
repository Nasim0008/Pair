#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int>p[]={{2,1},{65,8},{4,87},{4,8},{45,96},{42,58}};
    sort(p,p+5);
    for(int i=0;i<5;i++)
    {
        cout<<p[i].first<< " "<<p[i].second<< " "<<endl;
    }
}
