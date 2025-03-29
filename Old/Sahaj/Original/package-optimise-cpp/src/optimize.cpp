//If this code doesn't compile please compile myCode.cpp

#include<bits/stdc++.h>
#include "optimize.h"
#include <vector>
using namespace std;

vector<vector<int>> optimise(int containerSize , vector<int> groupSizes) {
  vector<vector<int>> optimal_groups;
  int sum = 0 ;
	vector < int > temp ;
  for ( int i = 0 ; i < groupSizes.size() ;  )
  {
    if ( groupSizes [ i ] + sum <= containerSize )
    {
    	temp.push_back ( groupSizes [ i ]  ) ;
    	sum += groupSizes [ i ] ;
    	i ++ ;
    }
    else
    {
    	int x = containerSize - sum ;
    	if ( x > 0 and groupSizes [ i ] - x  <=  containerSize )
    	{
        temp.push_back ( x ) ;
    		groupSizes [ i ] -= x ;
      }
    	optimal_groups.push_back ( temp ) ;
    	temp .clear() ;
    	sum = 0 ;
    	while  (  groupSizes [ i ] >=  containerSize )
    	{
    		optimal_groups.push_back ( { containerSize } ) ;
    		groupSizes [ i ] = groupSizes [ i ] -  containerSize  ;
    	}
    	if ( groupSizes [ i ] == 0 )
    		i ++ ;
    	}
    }
    return optimal_groups;
}
