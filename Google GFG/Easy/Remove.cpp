#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    string s, s1;
    cin>>s;

    for(int i=0; s[i]!='\0'; i++)
    {
      if(s[i]=='a' && s[i+1]=='c')
        i++;
      else if(s[i]!='b')
        s1+=s[i];
    }

    for(int i=0; s1[i]!='\0'; i++)
      cout<<s1[i];

    cout<<"\n";
  }
  return 0;
}
