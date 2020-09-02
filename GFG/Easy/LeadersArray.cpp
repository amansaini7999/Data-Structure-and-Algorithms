#include<bits/stdc++.h>
using namespace std;

stack<int> getLeaders(int arr[], int n)
{
  stack<int> st;
  st.push(arr[n-1]);
  int mx = arr[n-1];

  for(int i=n-2; i>=0; i--)
  {
    if(arr[i]>=mx)
    {
      mx = arr[i];
      st.push(mx);
    }
  }

  return st;
}

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
      cin>>arr[i];

    stack<int> st = getLeaders(arr, n);

    while(!st.empty())
    {
      cout<<st.top()<<" ";
      st.pop();
    }
    cout<<"\n";
  }

  return 0;
}
