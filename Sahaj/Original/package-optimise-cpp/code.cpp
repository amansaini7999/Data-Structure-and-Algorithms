#include "optimize.h"
#include <vector>
using namespace std;

vector<vector<int>> optimise(int containerSize , vector<int> groupSizes) {
    vector<vector<int>> optimal_groups;
    int i;

    for(i=0; i<groupSizes.size(); i++)
    {
        if(groupSizes[i]<=containerSize)
          optimal_groups[0].push_back(groupSizes[i]);
    }

    return optimal_groups;
}

int main()
{
  vector<int> groupSizes = {1,3,11,3,5,1,2,4};
  int containerSize=6;
  optimise(containerSize, groupSizes);
  return 0;
}
