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

    stack<char> st;

    int ct=0, longest=INT_MIN;
    for(int i=0; s[i]!='\0'; i++)
    {

      if(s[i]=='(')
        st.push('(');
      else if(s[i]==')')
      {
        if(!st.empty())
        {
          if(st.top()=='(')
          {
            ct++;
            st.pop();
          }
          else
          {
            longest = max(longest, ct);
            ct=0;
            while(!st.empty())
              st.pop();
          }
        }
      }
    }
    cout<<longest<<endl;
  }
  return 0;
}
