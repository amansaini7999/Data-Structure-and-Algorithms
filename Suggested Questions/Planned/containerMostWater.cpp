#include<bits/stdc++.h>
using namespace std;

/*int getMax(vector<int> A, int l, int r)
{
  if(l>r)
    return INT_MIN;

  else if(l==r)
    return 0;

  int minIndex = l;
  for(int i=l; i<=r; i++)
  {
    if(A[i]<A[minIndex])
      minIndex = i;
  }

  return max(max(getMax(A, l, minIndex-1), getMax(A, minIndex+1, r)), (r-l)*A[minIndex]);
}*/

int maxArea(vector<int> A)
{
  //return getMax(A, 0, A.size()-1);

  int i=0, j=A.size()-1;
  int mx = 0;

  while(i<j)
  {
    int area = min(A[i], A[j])*(j-i);
    mx = max(mx, area);

    if(A[i]<A[j])
      i++;
    else
      j--;
  }
  return mx;
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

  cout<<maxArea(v)<<"\n";

  return 0;
}
