#include<bits/stdc++.h>
using namespace std;

void sort(vector<string>& s)
{
  int n=s.size();
  for (int i=1 ;i<n; i++)
  {
    string temp = s[i];
    int j = i - 1;
    while (j >= 0 && temp.length() > s[j].length())
    {
      s[j+1] = s[j];
      j--;
    }
    s[j+1] = temp;
  }
}

bool check(string s, string str)
{
  map<char, int> mp;

  for(int i=0; i<str.size(); i++)
    mp[str[i]]++;

  for(int i=0; i<s.size(); i++)
  {
    if(!mp[s[i]])
      return 0;
    mp[s[i]]--;
  }

  return 1;
}

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    int n;
    vector<string> v;
    cin>>n;

    string x;
    for(int i=0; i<n; i++)
    {
      cin>>x;
      v.push_back(x);
    }

    string str;
    cin>>str;
    sort(v);

    for(int i=0; i<v.size(); i++)
    {
      if(check(v[i], str))
      {
        cout<<v[i];
        break;
      }
    }
    cout<<"\n";
  }
  return 0;
}
