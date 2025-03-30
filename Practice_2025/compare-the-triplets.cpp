#include <bits/stdc++.h>

using namespace std;

vector<int> compareScore(vector<int> aliceScoreArray, vector<int> bobScoreArray) {
  int aliceScore = 0;
  int bobScore = 0;
  for (int i=0; i<3; i++) {
    if (aliceScoreArray[i] < bobScoreArray[i]) {
      bobScore+=1;
    } else if (aliceScoreArray[i] > bobScoreArray[i]) {
      aliceScore+=1;
    }
  }

  vector<int> resultScore;
  resultScore.push_back(aliceScore);
  resultScore.push_back(bobScore);

  return resultScore;
}

int main() {
  vector<int> aliceScoreArray;
  int aliceScore;
  for (int i=0; i<3; i++) {
    cin>>aliceScore;
    aliceScoreArray.push_back(aliceScore);
  }

  vector<int> bobScoreArray;
  int bobScore;
  for (int i=0; i<3; i++) {
    cin>>bobScore;
    bobScoreArray.push_back(bobScore);
  }

  vector<int> resultScore = compareScore(aliceScoreArray, bobScoreArray);
  for (int score: resultScore) {
    cout<<score<<" ";
  }

  return 0;
}
