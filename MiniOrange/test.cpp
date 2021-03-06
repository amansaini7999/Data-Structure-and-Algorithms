#include<bits/stdc++.h>
using namespace std;

int checkMax(int arr[], int n){
  int maxElement=INT_MIN;
  for(int i=0; i<n; i++){
    if(arr[i]>maxElement)
      maxElement=arr[i];
  }
  return maxElement;
}

int checkMax2(int arr[], int n, int max){
  int maxElement=INT_MIN;
  for(int i=0; i<n; i++){
    if(arr[i]>maxElement && arr[i]<max)
      maxElement=arr[i];
  }
  return maxElement;
}

void checkMaxK(int arr[], int n, int k){
  set<int, greater<int>> s;
  for(int i=0; i<n; i++){
    s.insert(arr[i]);
  }

  if(s.size()<k)
    cout<<"Out of Bounds\n";
    // return -1;

  int cnt=1;
  for(auto itr: s){
    if(cnt==k){
      cout<<itr<<"\n";
    }
    cnt++;
  }
}

int subarrayMax(int arr[], int n){
  int globalSumMax=arr[0];
  int sum=arr[0];


  //input array = [-2,1,-3,4,-1,2,1,-5,4]
  // int sum=0;
  for(int i=1; i<n; i++){
    sum+=arr[i]; // -1 -4 3 5 6 1

    if(arr[i]>sum)
      sum=arr[i]; // 1 4

    if(sum>globalSumMax)
      globalSumMax=sum; // 1 4 5 6
  }

  return globalSumMax;
}

int main(){
  int arr[] = {-2,-1,-3,-4,-1,-2,-1,-5,-4}; //{1, 9, 10, 14, 5, 10, 9, 8, 7};
  int n = 9;
  // int max = checkMax(arr, n);
  // int max2 = checkMax2(arr, n, max);
  // checkMaxK(arr, n, 7);
  // cout<<max<<" "<<max2<<"\n";
  // int maxSum = subarrayMax(arr, n);
  // cout<<maxSum<<"\n";

  return 0;
}
