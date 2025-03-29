#include<bits/stdc++.h>
using namespace std;

void printAllInterpretations(vector<int> v, int pos, string result){
  if(pos==v.size()){
    cout<<result<<"\n";
    return;
  }

  printAllInterpretations(v, pos+1, result+char(v[pos]+'a'-1));

  if(pos+1<v.size() && v[pos]*10+v[pos+1]<=26)
    printAllInterpretations(v, pos+2, result+char(v[pos]*10+v[pos+1]+'a'-1));
}

int main()
{
  vector<int> v{9, 1, 8};

  printAllInterpretations(v, 0, "");

  return 0;
}
