#include <bits/stdc++.h>
using namespace std;

int minimumSwaps(vector<int> arr) {
  int i, temp, minSwap=0;
  for(i=0; i<arr.size(); i++)
  {
    while(arr[i] != i+1)
    {
      temp = arr[i];
      arr[i] = arr[temp-1];
      arr[temp-1] = temp;
      minSwap++;
    }
  }
  return minSwap;
}

int main()
{
  int n, temp, minSwap;
  vector<int> v;
  cin>>n;

  for(int i=0; i<n; i++)
  {
    cin>>temp;
    v.push_back(temp);
  }

  minSwap = minimumSwaps(v);
  cout<<minSwap<<"\n";
  return 0;
}
