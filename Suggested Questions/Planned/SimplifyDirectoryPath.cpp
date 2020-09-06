#include<bits/stdc++.h>
using namespace std;

string simplifyPath(string A)
{
  stack<string> s, temp;
  string dir, res;

  int i=0;
  while(i<A.size())
  {
    dir.clear();

    while(A[i]=='/')
      i++;

    while(i<A.size() && A[i]!='/')
    {
      dir.push_back(A[i]);
      i++;
    }

    if(dir.compare("..")==0)
    {
      if(!s.empty())
        s.pop();
    }

    else if(dir.compare(".")==0)
      continue;

    else if(dir.size()!=0)
      s.push(dir);
  }

  while(!s.empty())
  {
    temp.push(s.top());
    s.pop();
  }

  while(!temp.empty())
  {
    res+='/';
    res+=temp.top();
    temp.pop();
  }

  if(res.size()==0)
    res+='/';

  return res;
}

int main()
{
  string s;
  cin>>s;

  cout<<simplifyPath(s)<<"\n";
  return 0;
}
