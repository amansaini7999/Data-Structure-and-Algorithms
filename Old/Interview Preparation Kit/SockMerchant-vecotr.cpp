#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, n;

    cin>>n;

    vector<int> v, v1(100, 0);
    int ct=0;

    for(i=0; i<n; i++)
    {
        cin>>j;
        v.push_back(j);
        v1[j]++;
    }
    
    for(auto i=v1.begin(); i!=v1.end(); i++)
    ct+=floor(*i/2);
    
    cout<<ct;
}
