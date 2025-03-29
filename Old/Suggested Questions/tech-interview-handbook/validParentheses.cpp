#include<bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
  stack<char> st;
  for(int  i=0; i<s.size(); i++)
  {
    if(s[i]=='(' || s[i]=='{' || s[i]=='[')
      st.push(s[i]);

    else if(s[i]==')')
    {
      if(!st.empty() && st.top()=='(')
        st.pop();
      else
        return 0;
    }

    else if(s[i]=='}')
    {
      if(!st.empty() && st.top()=='{')
        st.pop();
      else
        return 0;
    }

    else if(s[i]==']')
    {
      if(!st.empty() && st.top()=='[')
        st.pop();
      else
        return 0;
    }
  }
  if(!st.empty())
    return 0;

  return 1;
}

int main()
{
  string s;
  cin>>s;

  if(isValid(s))
    cout<<"true\n";
  else
    cout<<"false\n";

  return 0;
}
