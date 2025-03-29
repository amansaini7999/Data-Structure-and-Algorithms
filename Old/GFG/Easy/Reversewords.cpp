#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    string s;
    cin>>s;

    string str;
    vector<string> v;
    for(int i=0; s[i]!='\0'; i++)
    {
      if(s[i] != '.')
        str.push_back(s[i]);
      else
      {
        v.push_back(str);
        str.clear();
      }
    }
    v.push_back(str);

    int ct=0;
    for(int i=v.size()-1; i>=0; i--)
    {
      if(ct!=0)
        cout<<"."<<v[i];
      else
        cout<<v[i];
      ct++;
    }
    cout<<"\n";
  }
  return 0;
}
