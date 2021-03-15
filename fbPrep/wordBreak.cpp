#include<bits/stdc++.h>
using namespace std;

bool checkWordBreak(unordered_set<string> s, string str){
  if(str.size()==0)
    return true;

  for(int i=1; i<=str.size(); i++){
    if(s.find(str.substr(0, i))!=s.end() && checkWordBreak(s, str.substr(i, str.size()-i)))
      return true;
  }
  return false;
}

bool checkWordBreakUsingTwoPointer(unordered_set<string> s, string str){
  int i=0, j=1;
  int totalSegmented=0;
  while(j<=str.size()){
    if(s.find(str.substr(i, (j-i)))!=s.end()){
      totalSegmented+=j-i;
      i = j;
      j++;
    }
    else
      j++;
  }

  if(totalSegmented==str.size())
    return true;

  return false;
}

int main()
{
  unordered_set<string> s;

  // { i, like, sam, sung, samsung, mobile, ice, cream, icecream, man, go, mango}

  s.insert("i");
  s.insert("like");
  s.insert("sam");
  s.insert("sung");
  s.insert("samsung");
  s.insert("mobile");
  s.insert("ice");
  s.insert("cream");
  s.insert("icecream");
  s.insert("man");
  s.insert("go");
  s.insert("mango");

  string str;
  str = "ilikesamsamman";

  if(checkWordBreak(s, str))
    cout<<"Yes\n";
  else
    cout<<"No\n";

  if(checkWordBreakUsingTwoPointer(s, str))
    cout<<"Yes\n";
  else
    cout<<"No\n";

  return 0;
}
