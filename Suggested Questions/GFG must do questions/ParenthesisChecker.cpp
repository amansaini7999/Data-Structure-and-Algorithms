// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to return if the paranthesis are balanced or not
bool ispar(string x)
{
    // Your code here
    stack<char> st;
    for(int i=0; i<x.size(); i++)
    {
      cout<<x[i]<<" ";
        /*if(x[i]=="{" || x[i]=="(" || x[i]=="[")
            st.push(x[i]);
        else if(x[i]=="}" && st.top()=="{")
            st.pop();
        else if(x[i]=="]" && st.top()=="[")
            st.pop();
        else if(x[i]==")" && st.top()=="(")
            st.pop();
        else
            return 0;*/
    }

    if(!st.empty())
        return 0;

    return 1;
}


// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       if(ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends
