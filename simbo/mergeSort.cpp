#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int beg, int mid, int end){
  //0 1 2 3 10
  //4 9 11 15 25

  int helpingArr[end-beg+1];

  int m = mid, i=0;
  while(beg<m && mid<=end){
    if(arr[beg]<=arr[mid]){
      helpingArr[i] = arr[beg];
      i++;
      beg++;
    }
    else if(arr[beg]>arr[mid]){
      helpingArr[i]=arr[mid];
      mid++;
      i++;
    }
  }

  while(beg<m){

  }

  while(mid<=end){

  }

  return
}

vector<int> mergeSort(vector<int> arr, int beg, int end){
  if(beg>=end)
    return;
  int mid = (beg+end)/2;
  mergeSort(arr, beg, mid);
  mergeSort(arr, mid+1, end);
  vector<int> ans = merge(arr, beg, mid+1, end);
  return ans;
}

int main(){
  vector<int> arr{2, 3, 5, 1, 0, 4, 9, 11, 25, 15};

  mergeSort(arr, 0, 9);

  for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";

  return 0;
}
