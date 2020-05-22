// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

// User function to complete
// arr[]: input array
// n: size of array
// k: find element smaller and closest to it.
int immediateSmaller(int arr[], int n, int x)
{
  int i, diff=0, minDiff=INT_MAX, index=-1;

  for(i=0; i<n; i++)
  {
    diff=x-arr[i];
    if(diff<minDiff && diff>0)
    {
      index=i;
      minDiff=diff;
    }
  }

  if(index==-1)
    return -1;

  return arr[index];
}


// { Driver Code Starts.

int main() {

	int t;
	cin>>t;

	while(t--)
	{

            int n;
        	cin >> n;

        	int arr[n];

        	for(int i = 0;i<n;i++){
        	    cin >> arr[i];
        	}

        	int x;
        	cin >> x;

        	cout << immediateSmaller(arr, n, x) << endl;
	}


	return 0;
}
  // } Driver Code Ends
