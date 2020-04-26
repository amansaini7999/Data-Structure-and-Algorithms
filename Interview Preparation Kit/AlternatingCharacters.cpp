#include <bits/stdc++.h>

using namespace std;

// Complete the alternatingCharacters function below.
int alternatingCharacters(string s) {
  int i, dt=0;
  char prev = s[0];

  for(i=1; s[i]!='\0'; i++)
  {
    if(prev == s[i])
      dt++;
    else
      prev = s[i];
  }
  return dt;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = alternatingCharacters(s);

        cout<<result<<"\n";

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
