#include <bits/stdc++.h>
using namespace std;

int minTime(vector<int> v, int goal)
{
  int min=INT_MAX, max=INT_MIN;
  for(int i=0; i<v.size(); i++)
  {
    if(v[i]<min)
      min=v[i];
    if(v[i]>max)
      max=v[i];
  }
  int upperBound=(goal*max)/v.size(), lowerBound=(goal*min)/v.size();
  int j;

  int beg=lowerBound;
  int end=upperBound;
  int mid;

  while(beg<end)
  {
    int product=0;
    mid=(beg+end)/2;

    for(j=0; j<v.size(); j++)
      product+=mid/v[j];

    if(product >= goal)
      end = mid;
    else
      beg=mid+1;
  }
  return beg;
}

int main()
{
  int n, goal;
  vector<int> v;

  cin>>n>>goal;

  while(n--)
  {
    int temp;
    cin>>temp;
    v.push_back(temp);
  }

  int ans = minTime(v, goal);
  cout<<ans<<"\n";
  return 0;
}
