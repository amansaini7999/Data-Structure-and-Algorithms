#include<bits/stdc++.h>
using namespace std;

string bin(int n)
{
  if(n>1)
    bin(n>>1);

  int t = n&1;
  return to_string(t);
}

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    string s;
    cin>>s;

    int n=0;
    for(int i=0; s[i]!='\0'; i++)
      if(s[i]=='?')
        n++;

    for(int i=0; i<n; i++)
    {
      string s1=bin(i);

      cout<<s1<<" ";

    /*  string str=s;

      t=s1.size()-1;
      for(int i=s.size()-1; i>=0; i--)
      {
        if(str[i]=='?' && t>=0)
        {
          str[i]=s1[t];
          t--;
        }
        else if(str[i]=='?')
          str[i]=0;
      }

      cout<<str<<" ";
      //cout<<s1<<" ";*/
    }
    cout<<endl;
  }
  return 0;
}

/*int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    string s;
    cin>>s;

    int n=0;
    for(int i=0; s[i]!='\0'; i++)
      if(s[i]=='?')
        n++;

    n=pow(2, n);
    //n=n-1;

    cout<<n<<"\n";

    queue<string> q;
    q.push("1");
    while(n--)
    {
      string s1=q.front();
      q.pop();

      string str=s;

      t=s1.size()-1;
      for(int i=s.size()-1; i>=0; i--)
      {
        if(str[i]=='?' && t>=0)
        {
          str[i]=s1[t];
          t--;
        }
        else if(str[i]=='?')
          str[i]=0;
      }

      //cout<<str<<" ";
      cout<<s1<<" ";

      string s2=s1;
      q.push(s1.append("0"));
      q.push(s2.append("1"));
    }
    cout<<endl;
  }
  return 0;
}*/
