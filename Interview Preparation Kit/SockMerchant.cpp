#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, n, ct=0;

    cin>>n;

    int arr[n];
    int count[101] = {0};

    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        count[arr[i]] = count[arr[i]]+1;
    }

    for(i=0; i<101; i++)
        ct+=floor(count[i]/2);

    cout<<ct;
}
