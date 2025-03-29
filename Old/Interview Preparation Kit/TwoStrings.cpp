#include <bits/stdc++.h>

using namespace std;

// Complete the twoStrings function below.
string twoStrings(string s1, string s2) {
  int i;
  map<char, int> m;

  for(i=0; i<s1.size(); i++)
    m.insert(pair<char, int> (s1[i], 1));

  for(i=0; i<s2.size(); i++)
  {
    if(m[s2[i]] == 1)
      cout<<m[s2[i]]<<" ";
  }
  return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        string result = twoStrings(s1, s2);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
