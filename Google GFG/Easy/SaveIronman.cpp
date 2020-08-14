#include<bits/stdc++.h>
using namespace std;

bool check(char ch[], int n)
{
  int i=0;
  int j=n-1;

  while(i<j)
  {
    if(ch[i]!=ch[j])
      return 0;
    i++;
    j--;
  }
  return 1;
}

int main()
{
  int t;
  cin>>t;
  cin.ignore();

  while(t--)
  {
    string s;
    getline(cin, s);

    char ch[s.length()];

    int k=0;
    for(int i=0; s[i]!='\0'; i++)
    {
      if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9'))
          ch[k++]=tolower(s[i]);
    }

    if(check(ch, k))
      cout<<"YES\n";

    else
      cout<<"NO\n";
  }
  return 0;
}
