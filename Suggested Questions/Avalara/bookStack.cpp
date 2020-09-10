#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    int n, m, k;
    cin>>n>>m>>k;

    string s;
    cin>>s;

    int op=0;

    int i=0, j=s.size()-1;
    while(i<j)
    {
      if(s[i]=='M')
        i++;
      if(s[j]=='S')
        j--;

      if(s[i]=='S' && s[j]=='M')
      {
        swap(s[i], s[j]);
        i++;
        j--;
        op+=k;
      }
    }

    if(op<=m)
      cout<<"Yes\n";
    else
      cout<<"No\n";
  }
  return 0;
}
