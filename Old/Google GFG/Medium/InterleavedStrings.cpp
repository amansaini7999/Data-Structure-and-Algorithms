#include<bits/stdc++.h>
using namespace std;

int lcs(string a, string b, int n, int  m)
{
  if(n==0 || m==0)
    return 0;

  else if(a[n-1]==b[m-1])
    return 1+lcs(a, b, n-1, m-1);

  else
    return max(lcs(a, b, n-1, m), lcs(a, b, n, m-1));
}

bool isInterleave(string A, string B, string C)
{
  if(A.size()==0 && B.size()==0 && C.size()==0)
    return true;

  else if(A[0]!=C[0] || B[0]!=C[0])
    return false;

  int len1 = lcs(A, C, A.size(), C.size());
  if(len1!=A.size())
    return false;

  int len2 = lcs(B, C, B.size(), C.size());
  if(len2!=B.size())
    return false;

  return true;
}

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    string a, b, c;
    cin>>a>>b>>c;

    cout<<isInterleave(a, b, c)<<endl;
  }
  return 0;
}
