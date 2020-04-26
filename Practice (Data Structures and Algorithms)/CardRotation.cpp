#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t, n, i, j, ct, pos;
  cin>>t;

  while(t--)
  {
    cin>>n;
    int arr[n];

    queue<int> q;

    for(i=0; i<n; i++)
      q.push(i);

    for(j=1; j<=n; j++)
    {
      i=j;
      while(i--)
      {
        q.push(q.front());
        q.pop();
      }
      arr[q.front()] = j;
      q.pop();
    }

    for(i=0; i<n; i++)
      cout<<arr[i]<<" ";
    cout<<"\n";
  }
  return 0;
}
