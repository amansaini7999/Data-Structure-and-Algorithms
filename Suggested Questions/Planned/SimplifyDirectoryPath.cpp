#include<bits/stdc++.h>
using namespace std;

string simplifyPath(string A)
{
  stack<char> s;
  char ch = A[A.size()-1];
  for(int i=A.size()-1; i>=0; i--)
  {
    if(s.empty() && A[i]=='/')
      continue;

    else if(A[i]=='.' && ch == '.')
      continue;

    else if(A[i]=='.')
      break;

    else if(A[i]!='/')
      s.push(A[i]);

    else if(!s.empty())
    {
      if(s.top()=='/')
        continue;
      else
        s.push(A[i]);
    }
  }

  if(s.empty())
    s.push('/');

  string str;
  while(!s.empty())
  {
      char top = s.top();
      s.pop();
      str+=top;
  }
  return str;
}

int main()
{
  string s;
  cin>>s;

  cout<<simplifyPath(s)<<"\n";
  return 0;
}
