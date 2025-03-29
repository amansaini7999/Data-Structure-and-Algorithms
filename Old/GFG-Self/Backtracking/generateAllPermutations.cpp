#include<bits/stdc++.h>
using namespace std;

void permutationsUsingSTL(string s){

  do{
    cout<<s<<"\n";
  }while(next_permutation(s.begin(), s.end()));

  return;
}

void permutationsUtil(string s, int x, int end){
  if(x==end){
    cout<<s<<"\n";
    return;
  }

  for(int i=x; i<=end; i++){
    swap(s[i], s[x]);

    permutationsUtil(s, x+1, end);

    swap(s[i], s[x]);
  }

  return;
}

void permutations(string s){

  string ans="";
  permutationsUtil(s, 0, s.size()-1);

  return;
}

int main()
{
  string s = "abc";

  permutationsUsingSTL(s);
  cout<<"\n";
  permutations(s);

  return 0;
}
