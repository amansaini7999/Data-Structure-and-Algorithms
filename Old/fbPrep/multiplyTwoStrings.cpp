#include<bits/stdc++.h>
using namespace std;

string multiply(string s1, string s2){

  vector<string> v;

  int cnt=0;
  for(int j=s2.size()-1; j>=0; j--){
    string temp="";

    for(int k=0; k<cnt; k++)
      temp+="0";

    cnt++;

    int carry=0;
    for(int i=s1.size()-1; i>=0; i--){
      int t = (s1[i]-'0')*(s2[j]-'0')+carry;
      carry = t/10;
      int number = t%10;

      temp=to_string(number)+temp;
    }

    if(carry!=0)
      temp = to_string(carry)+temp;

    v.push_back(temp);
  }

  // cout<<v[v.size()-1].size()<<"\n";

  int n1=v[v.size()-1].size();

  for(int i=0; i<v.size()-1; i++){
    string temp = v[i];
    int n = temp.size();
    for(int j=0; j<n1-n; j++){
      temp="0"+temp;
    }
    v[i]=temp;
  }

  // for(int i=0; i<v.size(); i++){
  //   cout<<v[i]<<" ";
  // }
  // cout<<"\n";

  string ans="";
  int carry=0;
  for(int j=n1-1; j>=0; j--){
    int sum=0;
    for(int i=0; i<v.size(); i++){
      sum+=v[i][j]-'0';
    }
    sum+=carry;
    carry = sum/10;
    sum=sum%10;

    ans=to_string(sum)+ans;
  }
  if(carry!=0)
    ans=to_string(carry)+ans;

  return ans;
}

int main() {

    int t=1;
    while(t--)
    {
    	string a="123";
    	string b="456";
      cout<<multiply(a, b)<<endl;
    }

    return 0;
}
