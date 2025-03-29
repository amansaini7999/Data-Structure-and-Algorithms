#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t, n;
  cin>>t;

  while(t--)
  {
    cin>>n;
    vector<int> v;
    int temp, bribe=0;

    for(int i=0; i<n; i++)
    {
      cin>>temp;
      v.push_back(temp);
    }

    int totalBribe=0;
    for(int i=v.size()-1; i>=0; i--)
    {
      int bribe=0;
      if(v[i] != i+1)
      {
        if((i-1) >= 0 && v[i-1] == i+1)
        {
          v[i-1] = v[i];
          v[i] = i+1;
          bribe+=1;
        }
        else if((i-2) >= 0 && v[i-2] == i+1)
        {
          v[i-2] = v[i-1];
          v[i-1] = v[i];
          v[i] = i+1;
          bribe+=2;
        }
        else
        {
          bribe=3;
          break;
        }
        totalBribe+=bribe;
      }
    }
    if(bribe>2)
      cout<<"Too chaotic\n";
    else
      cout<<totalBribe<<"\n";
  }
  return 0;
}
