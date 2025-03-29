#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool leapYear(int year)
{
  if(year%4==0 && year%100!=0)
    return 1;

  else if(year%400==0)
    return 1;

  return 0;
}

string func(string currentDate)
{
    string month,date,year,time;
    stringstream ss(currentDate);
    ss>>month>>date>>year>>time;
    int mon;
    if(month=="January")
      mon=0;
    else if(month=="February")
      mon=1;
    else if(month=="March")
      mon=2;
    else if(month=="April")
      mon=3;
    else if(month=="May")
      mon=4;
    else if(month=="June")
      mon=5;
    else if(month=="July")
      mon=6;
    else if(month=="August")
      mon=7;
    else if(month=="September")
      mon=8;
    else if(month=="October")
      mon=9;
    else if(month=="November")
      mon=10;
    else if(month=="December")
      mon=11;

    ll days[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};

    ll total;
    int ex=0;
    if(leapYear(stoi(year)))
    {
      total = 366*24*60;
      if(mon>1)
        ex=1;
    }
    else
      total = 365*24*60;

    ll current=0;
    current+=(days[mon]+ex)*24*60;
    current+=(stoi(date)-1)*24*60;
    current+=((int)(time[0]-'0')*10 + (int)(time[1]-'0') )*60;
    current+=(int)(time[3]-'0')*10 + (int)(time[4]-'0');
    long double ans = (long double)current*100/total;
    stringstream St;
    St<<fixed;
    St<<setprecision(9)<<ans;
    return St.str();
}
int main()
{
    string s;
    getline(cin,s);
    cout<<func(s)<<"\n";
}
