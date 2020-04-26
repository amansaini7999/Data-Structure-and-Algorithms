#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n, i, j, temp, sum;
  vector<int> v;
  cin>>n;

  for(i=0; i<n; i++)
  {
    cin>>temp;
    v.push_back(temp);
  }

  sort(v.begin(), v.end());

  cout<<"Optimal Storage\n";

  for(i=0; i<v.size(); i++)
  cout<<v[i]<<" ";
  cout<<"\n";

  sum = 0;
  for(i=0; i<v.size(); i++)
    for(j=0; j<=i; j++)
      sum = sum+v[j];

  cout<<"MRT: "<<float(sum)/float(v.size())<<"\n";

  return 0;
}
