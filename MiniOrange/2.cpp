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

  for(auto itr: mset){
    if(!fl){
      a=itr;
      fl++;
      continue;
    }
    if(fl==1){
      b=itr;
      fl++;
      continue;
    }
    if(fl>1){
      if((a+b)>=itr){
        flag=0;
      }
      a=b;
      b=itr;
    }
  }

  if(flag)
    cout<<"yes";
  else
    cout<<"No";

	return 0;
}
