#include<bits/stdc++.h>
using namespace std;

bool check(vector<int> v, int &temp)
{
  for(int i=0; i<v.size(); i++)
  {
    temp+=abs(v[i]-(i+1));
    if(v[i]==(i+1))
      return 0;
  }

  return 1;
}

int main()
{
  int n;
  cin>>n;

  vector<int> v;
  for(int i=0; i<n; i++)
    v.push_back(i+1);

  int min=INT_MAX, max=INT_MIN;
  vector<int> mx, mn;

  do {
    int temp=0;
    if(check(v, temp))
    {
      min = temp;
      mn = v;
      break;
    }
  } while(next_permutation(v.begin(), v.end()));

  v.clear();
  for(int i=n; i>=1; i--)
    v.push_back(i);
  do {
    int temp=0;
    if(check(v, temp))
    {
      if(temp>max)
      {
        max = temp;
        mx = v;
      }
      break;
    }
  } while(next_permutation(v.begin(), v.end()));

  /*do {
    int temp=0;
    if(check(v, temp))
    {
      if(temp<min)
      {
        min = temp;
        mn = v;
      }

      if(temp>max)
      {
        max = temp;
        mx = v;
      }
    }
  } while(next_permutation(v.begin(), v.end()));*/

  cout<<max<<"\n";
  for(auto itr:mx)
    cout<<itr<<" ";
  cout<<"\n";
  cout<<min<<"\n";
  for(auto itr:mn)
    cout<<itr<<" ";
  cout<<"\n";

  return 0;
}
