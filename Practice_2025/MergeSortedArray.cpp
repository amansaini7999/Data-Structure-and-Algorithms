#include <bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> nums1, int m, vector<int> nums2, int n) {
  vector<int> mergedArray;

  int i=0, j=0;
  while (i<m && j<n) {
    if (nums1[i] < nums2[j]) {
      mergedArray.push_back(nums1[i]);
      i++;
    } else {
      mergedArray.push_back(nums2[j]);
      j++;
    }
  }

  while (i<m) {
    mergedArray.push_back(nums1[i]);
    i++;
  }

  while (j<n) {
    mergedArray.push_back(nums2[j]);
    j++;
  }

  return mergedArray;
}

int main() {
  int temp;

  int m;
  cin>>m;

  vector<int> nums1;
  for (int i=0; i<m; i++) {
    cin>>temp;
    nums1.push_back(temp);
  }

  int n;
  cin>>n;

  vector<int> nums2;
  for(int i=0; i<n; i++) {
    cin>>temp;
    nums2.push_back(temp);
  }

  vector<int> mergedArray = merge(nums1, m, nums2, n);
  cout<<"Merged Array\n";
  for (auto element: mergedArray) {
    cout<<element<<" ";
  }

  return 0;
}
