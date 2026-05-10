#include<bits/stdc++.h>

using namespace std;

int minimiseUnfairnessSweets(vector<int> sweetsArr, int m) {
	sort(sweetsArr.begin(), sweetsArr.end());

	if (m>sweetsArr.size()) {
		return -1;
	}

	int minDiff = INT_MAX;
	int i=0;
	for (int j=m-1; j<sweetsArr.size(); j++) {
		minDiff = min(sweetsArr[j]-sweetsArr[i], minDiff);
		i++;
	}

	return minDiff;
}

int main() {
	int n, m;
	vector<int> sweetsArr;

	cin>>n>>m;

	int sweets;
	for(int i=0; i<n; i++) {
		cin>>sweets;
		sweetsArr.push_back(sweets);
	}

	int unfairDiff = minimiseUnfairnessSweets(sweetsArr, m);
	
	cout<<unfairDiff<<endl;

	return 0;
}