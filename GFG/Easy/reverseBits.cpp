#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    unsigned int n;
    cin>>n;

    stack<unsigned int> st;
    int ct=0;
    for(unsigned int i=1<<31; i>0; i/=2)
    {
      (n&i)?st.push(1):st.push(0);
      ct++;
    }

    ct--;
    n=0;
    while(!st.empty())
    {
      n+=st.top()*pow(2, ct);
      st.pop();
      ct--;
    }

    cout<<n<<"\n";
  }

  return 0;
}
