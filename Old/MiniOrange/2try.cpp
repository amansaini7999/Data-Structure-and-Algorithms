#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;

  multiset<int> mset;

  for(int i=0; i<n; i++){
    int temp;
    cin>>temp;
    mset.insert(temp);
  }

  int fl=0;
  int a=0, b=0;
  int flag=1;

  multiset<int> :: iterator itr;
  itr = mset.begin();
  cout<<*itr<<" ";
  itr++;
  cout<<*itr<<" ";
  itr++;
  for(; itr!=mset.end(); itr++){
    cout<<*itr<<" ";
  }

  // cout<<*(mset.begin()+1);

  // for(auto itr: mset){
  //   cout<<itr<<" ";
  // }

	return 0;
}
