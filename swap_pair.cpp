#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<string,int>p1;
    pair<string , int>p2;
    p1=make_pair("nasim",10);
    p2=make_pair("ayesha",20);
    swap(p1,p2);
    cout<<p1.first<< " "<<p1.second<<endl;
    cout<<p2.first<< " "<<p2.second<<endl;
}