// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 501

int getId(int M[MAX][MAX],int n);

int main()
{
    int T;
    cin>>T;
    int M[MAX][MAX];
    while(T--)
    {
        int N;
        cin>>N;
        memset(M,0,sizeof M);
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                cin>>M[i][j];
            }
        }
        cout<<getId(M,N)<<endl;

    }
}

// } Driver Code Ends


// The task is to complete this function

// M[][]: input matrix
// n: size of matrix (n*n)
int getId(int M[MAX][MAX], int n)
{
    //Your code here
    int ct=0, index;
    for(int i=0; i<n; i++)
    {
        int flag=0;
        for(int j=0; j<n; j++)
        {
            if(M[i][j]!=0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            ct++;
            index=i;
        }
    }
    if(ct==1)
        return index;
    return -1;
}
