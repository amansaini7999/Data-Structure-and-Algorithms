// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

//You need to complete this function
bool isPrime(int N)
{
    //Your code here
    int i;

    for(i=2; i<=sqrt(N); i++)
      if(N%i==0)
        return 0;

    return 1;
}


// { Driver Code Starts.

int main()
{
    int T; //testcases
    cin>>T; //input testcases
    while(T--) //while testcase have not been exhausted
    {
        int N;
        cin>>N; //input n

        if(isPrime(N))
        cout<<"Yes";
        else
            cout<<"No";

        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends
