#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    string s;
    cin>>s;

    cout<<s.size()<<" "<<pow(2, 0)<<" ";

    int k=0, sum=0, ct=0;
    for(int i=s.size()-1; i>=0; i--)
    {
      sum+=s[i]*pow(2, k);
      k++;

      cout<<log(sum)/log(5)<<" ";

      if( ceil(log(sum)/log(5)) == floor(log(sum)/log(5)) )
      {
        sum=0;
        k=0;
        ct++;
      }
    }
    if(ct==0)
      cout<<-1<<"\n";
    else
      cout<<ct<<"\n";
  }
  return 0;
}
