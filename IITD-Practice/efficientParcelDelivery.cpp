#include<bits/stdc++.h>
using namespace std;

int findMinimumTrucks(vector<int> truckCapacity, int n, int m) {
	sort(truckCapacity.begin(), truckCapacity.end());

	int totalCapacity = 0;
	for (int i=n-1; i>=0; i--) {
		totalCapacity+=truckCapacity[i];

		if (totalCapacity>m) {
			return n-i;
		}
	}

	return -1;
}

int main() {
	int n, m;
	cin>>m>>n;

	vector<int> truckCapacity;

	int capacity;
	for(int i=0; i<n; i++) {
		cin>>capacity;
		truckCapacity.push_back(capacity);
	}

	int minTrucks = findMinimumTrucks(truckCapacity, n, m);
	cout<<minTrucks<<endl;

	return 0;
}