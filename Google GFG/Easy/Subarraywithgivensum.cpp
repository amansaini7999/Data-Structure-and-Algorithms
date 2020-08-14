#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    int n, s;
    cin>>n>>s;

    vector<int> v;
    int x;

    for(int i=0; i<n; i++)
    {
      cin>>x;
      v.push_back(x);
    }

    queue<int> q;

    int beg=1, end=0, sum=0, flag=0;
    for(int i=0; i<n; i++)
    {
      q.push(v[i]);
      sum+=v[i];
      end++;

      while(sum>s)
      {
        sum-=q.front();
        q.pop();
        beg++;
      }

      if(sum==s)
      {
        flag=1;
        break;
      }
    }
    if(flag==1)
      cout<<beg<<" "<<end<<endl;
    else
      cout<<-1<<endl;
  }
  return 0;
}
