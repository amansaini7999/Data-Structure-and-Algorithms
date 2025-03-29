// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

int isPrime(int n)
{
  for(int j=2; j<=sqrt(n); j++)
  {
    if(n%j==0)
      return 0;
  }
  return 1;
}

//Complete this function
int exactly3Divisors(int N)
{
    //Your code here
    int count=0;

    for(int i=2; i<=sqrt(N); i++)
    {
      if(isPrime(i))
        count++;
    }
    return count;
}

// { Driver Code Starts.


int main()
 {
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        cout<<exactly3Divisors(N)<<endl;
    }
	return 0;
}  // } Driver Code Ends
