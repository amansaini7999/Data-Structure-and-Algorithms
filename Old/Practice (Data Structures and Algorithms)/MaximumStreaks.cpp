#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'getMaxStreaks' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts STRING_ARRAY toss as parameter.
 */

vector<int> getMaxStreaks(vector<string> toss) {
    // Return an array of two integers containing the maximum streak of heads and tails respectively
    int Heads=0, Tails=0, maxHeads=0, maxTails=0, i, prev;

    if(toss[0] == "Heads")
    {
        Heads+=1;
        prev = 1;
    }
    else if(toss[0] == "Tails")
    {
        Tails+=1;
        prev = 0;
    }
    maxHeads = Heads;
    maxTails = Tails;

    for(i=1; i<toss.size(); i++)
    {
        if(toss[i] == "Heads")
        {
            if(prev == 1)
                Heads++;
            else
            {
                if(Tails > maxTails)
                    maxTails = Tails;
                Heads=0;
                Heads++;
                prev = 0;
            }
        }
        else
        {
            if(prev == 0)
                Tails+=1;
            else
            {
                if(Heads > maxHeads)
                    maxHeads = Heads;
                Tails=0;
                Tails++;
                prev = 1;
            }
        }
    }
    vector<int> v;
    v.push_back(maxHeads);
    v.push_back(maxTails);

    return v;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string toss_count_temp;
    getline(cin, toss_count_temp);

    int toss_count = stoi(ltrim(rtrim(toss_count_temp)));

    vector<string> toss(toss_count);

    for (int i = 0; i < toss_count; i++) {
        string toss_item;
        getline(cin, toss_item);

        toss[i] = toss_item;
    }

    vector<int> ans = getMaxStreaks(toss);

    for (int i = 0; i < ans.size(); i++) {
        fout << ans[i];

        if (i != ans.size() - 1) {
            fout << " ";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
