#include <bits/stdc++.h>
using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {
  set<char> s;
  map<char, int> m1, m2, m3;
  map<char, int> :: iterator itr;
  int i, sum=0;
  string c=a+b;

  for(i=0; c[i]!='\0'; i++)
    s.insert(c[i]);

  for(i=0; a[i]!='\0'; i++)
    m1[a[i]]++;
  for(i=0; b[i]!='\0'; i++)
    m2[b[i]]++;

  for(i=0; c[i]!='\0'; i++)
  {
    if((m2[c[i]]-m1[c[i]])>0)
      m3[c[i]]=m2[c[i]]-m1[c[i]];
    else
      m3[c[i]]=m1[c[i]]-m2[c[i]];
  }

  for(itr=m3.begin(); itr!=m3.end(); itr++)
    sum+=itr->second;

  return sum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);
    cout<<res<<"\n";

    fout << res << "\n";

    fout.close();

    return 0;
}
