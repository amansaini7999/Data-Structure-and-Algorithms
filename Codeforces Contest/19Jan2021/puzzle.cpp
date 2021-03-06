#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        string s, ans;
        cin>>s;

        ans.push_back('1');

        for(int i=1; i<s.size(); i++)
        {
            if(s[i]=='0' && s[i-1]=='0' && ans[-1]=='')
                ans.push_back('0');

            else if(s[i]=='0' && s[i-1]=='1')
                ans.push_back('1');

            else if(s[i]=='1' && s[i-1]=='0')
                ans.push_back('1');

            else if(s[i]=='1' && s[i-1]=='1' && ans[-1]=='0')
                ans.push_back('1');

            else if(s[i]=='1' && s[i-1]=='1' && ans[-1]=='1')
                ans.push_back('0');
        }

        cout<<ans<<"\n";
    }
    return 0;
}