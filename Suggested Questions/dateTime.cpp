#include<bits/stdc++.h>
using namespace std;

int calculate(string s)
{
  string month;

  int i=0;
  while(!isspace(s[i]))
  {
    month+=s[i];
    i++;
  }
  i++;

  string date;
  while(s[i]!=',')
  {
    date+=s[i];
    i++;
  }
  i+=2;

  string year;
  while(!isspace(s[i]))
  {
    year+=s[i];
    i++;
  }
  i++;

  string hh;
  while(s[i]!=':')
  {
    hh+=s[i];
    i++;
  }
  i++;

  string min;
  while(s[i]!='\0')
  {
    min+=s[i];
    i++;
  }
  cout<<month<<" "<<date<<" "<<year<<" "<<hh<<" "<<min<<"\n";

  return 0;
}

int main()
{
  string s = "January 01, 2007 12:00";

  int ans = calculate(s);
  //cout<<ans<<"\n";
  return 0;
}
