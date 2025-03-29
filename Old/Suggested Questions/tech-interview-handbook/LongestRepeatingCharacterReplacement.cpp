#include<bits/stdc++.h>
using namespace std;

int characterReplacement(string s, int k)
{
  int mx=0;
  for(int i=0; i<26; i++)
  {
    int temp=0, l=0, r=0, mxLen=0;
    char ch = i+'A';

    while(r<s.size())
    {
      if(s[r]!=ch)
        temp++;

      while(temp>k)
      {
        if(s[l]!=ch)
          temp--;
        l++;
      }
      mxLen = max(mxLen, r-l+1);
      r++;
    }
    mx = max(mx, mxLen);
  }
  return mx;
}

int main()
{
  string s;
  cin>>s;

  int k;
  cin>>k;

  cout<<characterReplacement(s, k)<<"\n";

  return 0;
}
