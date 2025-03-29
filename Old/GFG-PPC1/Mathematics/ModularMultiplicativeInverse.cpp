// { Driver Code Starts
//Initial Template for C++

#include<iostream>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

//Complete this function
int modInverse(int a, int m)
{
    //Your code here
    int b;
    for(b=1; b<m; b++)
      if(a*b%m==1)
        return b;

    return -1;
}

// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--){
		int a,m;
		cin>>a>>m;
		cout << modInverse(a, m)<<endl;
	}
    return 0;
}  // } Driver Code Ends
