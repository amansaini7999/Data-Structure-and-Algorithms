#include<bits/stdc++.h>
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

int main()
{
  int containerSize = 6;
  vector<int> groupSizes = {1,3,12,3,5,1,2,4};
  vector<vector<int>> optimal_groups;
  optimal_groups = optimise(containerSize, groupSizes);
}
