#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;

  for(int z=1; z<=t; z++)
  {
    int n, q, i, j, totalSweetness=0;

    cin>>n>>q;
    int arr[n];

    for(i=0; i<n; i++)
      cin>>arr[i];

    char query;
    int a, b;
    while(q--)
    {
      int k=1, sign=1;
      int sweetness=0;
      cin>>query>>a>>b;

      switch (query) {
        case 'Q':
          a=a-1;
          b=b-1;
          k=1, sign=1;
          sweetness=0;
          for(j=a; j<=b; j++)
          {
            sweetness+=arr[j]*k*sign;
            sign=-1*sign;
            k++;
          }
        break;
        case 'U':
          a=a-1;
          arr[a]=b;
        break;
      }
      totalSweetness+=sweetness;
    }
    cout<<"Case #"<<z<<":"<<totalSweetness<<"\n";
  }
  return 0;
}
