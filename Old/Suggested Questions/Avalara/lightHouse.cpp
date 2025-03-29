#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
	cin >> t ;
	while ( t-- )
	{
		int n ;
		cin >> n ;

		int arr [ n +  1] ;
		for ( int i = 1 ; i <= n ; i ++ )
			cin >> arr [ i ] ;

		int left [ n ] , right [ n ] ;
		stack < int > stk , stk2 ;
		for ( int i = 1 ; i <=n ; i ++ )
		{
			right [ i ] = n ;
			while ( !stk.empty() and arr [ stk.top() ] < arr [ i ])
			{
				right  [ stk.top() ] = i ;
				stk.pop() ;
			}

			stk.push ( i ) ;
		}


		for ( int i = n  ; i > 0  ; i -- )
		{
			left  [ i ] = -1 ;
			while ( !stk2.empty() and arr [ stk2.top() ] < arr [ i ])
			{
				left  [ stk2.top() ] = i ;
				stk2.pop() ;
			}

			stk2.push ( i ) ;
		}

		int maxi = 0 ;
		int ans = -1 ;
		for ( int i = 1 ; i <= n ; i ++ )
		{
			int p = i * ( ( i - left [ i ]  - 1 )  + ( right [ i ] - i - 1 ) ) ;
			if ( p > maxi )
			{
				maxi = p ;
				ans = i ;
			}
		}
		cout  << ans << endl ;
	}
	return 0;
}
