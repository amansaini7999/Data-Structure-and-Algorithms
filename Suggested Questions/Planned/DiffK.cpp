#include<bits/stdc++.h>
using namespace std;

bool differencePossible(vector<int> A, int b)
{
  int i=0, j=1;

  while(i<A.size() && j<A.size())
  {
    if(i!=j && A[j]-A[i]==b)
      return 1;

    else if(A[j]-A[i]<b)
      j++;

    else
      i++;
  }
  return 0;
}

int main()
{
  int n;
  cin>>n;

  vector<int> v;
  for(int i=0; i<n; i++)
  {
    int x;
    cin>>x;
    v.push_back(x);
  }

  int b;
  cin>>b;

  cout<<differencePossible(v, b)<<"\n";
  return 0;
}
