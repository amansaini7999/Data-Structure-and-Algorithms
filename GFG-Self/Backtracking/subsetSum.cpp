#include<bits/stdc++.h>
using namespace std;

void recursiveSum(vector<int> arr, int i, int currentSum, int sum, string ans){
  if(currentSum==sum){
    cout<<ans<<"\n";
    return;
  }

  if(i==arr.size()){
    return;
  }

  if(currentSum+arr[i]<=sum){
    // do
    currentSum+=arr[i];

    // recur
    recursiveSum(arr, i+1, currentSum, sum, ans+to_string(arr[i])+" ");

    // undo
    currentSum-=arr[i];
  }

  recursiveSum(arr, i+1, currentSum, sum, ans);

}

int main()
{
  vector<int> arr {2, 3, 4, 1, 5};
  int sum=9;
  recursiveSum(arr, 0, 0, sum, "");
  return 0;
}
