#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &A)
{
  if(A.size()<3)
    return A.size();

  int j=2;
  for(int i=2; i<A.size(); i++)
  {
    if(A[j-2]!=A[i])
    {
      A[j] = A[i];
      j++;
    }
  }

  auto itr = A.begin()+j;
  while(itr!=A.end())
  {
    A.erase(itr);
  }

  return A.size();
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

  cout<<removeDuplicates(v)<<"\n";

  return 0;
}
