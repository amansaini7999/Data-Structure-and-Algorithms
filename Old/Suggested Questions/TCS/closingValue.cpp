#include<bits/stdc++.h>
using namespace std;

struct trans
{
  int TradeID;
  string TradeType;
  string StockName;
  int Price;
  int Quantity;
};

int main()
{
  int n;
  cin>>n;

  trans t[n], srt[n];
  for(int i=0; i<n; i++)
    cin>>t[i].TradeID>>t[i].TradeType>>t[i].StockName>>t[i].Price>>t[i].Quantity;

  int beg=0, end=n-1;
  for(int i=0; i<n; i++)
  {
    if(t[i].TradeType=="Sell")
      srt[beg++]=t[i];
    else
      srt[end--]=t[i];
  }

  int seg=beg;

  for(int i=0; i<seg; i++)
  {
    
  }


  for(int i=0; i<n; i++)
    cout<<t[i].TradeID<<" "<<t[i].TradeType<<" "<<t[i].StockName<<" "<<t[i].Price<<" "<<t[i].Quantity<<"\n";

    for(int i=0; i<n; i++)
      cout<<srt[i].TradeID<<" "<<srt[i].TradeType<<" "<<srt[i].StockName<<" "<<srt[i].Price<<" "<<srt[i].Quantity<<"\n";

  return 0;
}
