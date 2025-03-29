#include <bits/stdc++.h>
using namespace std;

bool checkNotSpecial(char ch)
{
    if(ch >= 'a' and ch <= 'z') return true;
    if(ch >= 'A' and ch <= 'Z') return true;
    if(ch >= '0' and ch <= '9') return true;
    return false;
}

int main(){
	string s;
  cin >> s;
  int n = s.size();
  for(int i = 0; i < n / 2; i++)
  {
    if(checkNotSpecial(s[i]) and checkNotSpecial(s[n - i - 1])) {
        swap(s[i], s[n - i - 1]);
        i++;
      }
  }
  cout << s;
	return 0;
}
