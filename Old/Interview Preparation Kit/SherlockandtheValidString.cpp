#include <bits/stdc++.h>

using namespace std;

// Complete the isValid function below.
string isValid(string s) {
  map<char, int> m;
  map<int, int> m1;
  map<char, int> :: iterator itr;
  int i, min, max;

  for(i=0; s[i]!='\0'; i++)
    m[s[i]]++;

  min = INT_MAX;
  max = INT_MIN;

  for(itr=m.begin(); itr!=m.end(); itr++)
  {
    if(itr->second < min)
      min = itr->second;
    if(itr->second > max)
      max = itr->second;
  }

  if(min == max)
    return "YES";

  else if(max-min>=2 && min!=1)
    return "NO";

  else
  {
    for(itr=m.begin(); itr!=m.end(); itr++)
    {
      m1[itr->second]++;

      if((m1[min]>1 && m1[max]>1)||(min==1 && m1[min]>1)||(m1.size()>2))
        return "NO";
    }
    return "YES";
  }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);
    cout<<result<<"\n";

    fout << result << "\n";

    fout.close();

    return 0;
}
