#include<bits/stdc++.h>
using namespace std;

int main()
{
  queue<int> q;
  int arr[10], k, maxSum=0, sum=0, i;

  cin>>k;

  for(i=0; i<10; i++)
    cin>>arr[i];

  for(i=0; i<k; i++)
  {
    sum+=arr[i];
    q.push(arr[i]);
  }

  if(maxSum<sum)
    maxSum=sum;

  for(i=k; i<10; i++)
  {
    sum=sum-q.front();
    q.pop();
    q.push(arr[i]);
    sum+=arr[i];

    if(maxSum<sum)
      maxSum=sum;
  }

  cout<<sum<<"\n";

}
