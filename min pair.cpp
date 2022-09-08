#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int>p1,p2;
    p1={5,6};
    p2={8,9};
    pair<int,int>p=min(p1,p2);
    cout<<p.first<< " "<<p.second<<endl;
}
