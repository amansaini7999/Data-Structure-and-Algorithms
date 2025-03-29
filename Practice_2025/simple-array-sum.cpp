#include <bits/stdc++.h>

using namespace std;

int main() {
	int sizeOfArray;
	vector<int> simpleArray;

	cout<<"Enter Size of Array: ";
	cin>>sizeOfArray;

	int arrayElement;
	cout<<"Enter space separated Simple Array Elements: ";
	for (int i=0; i<sizeOfArray; i++) {
		cin>>arrayElement;
		simpleArray.push_back(arrayElement);
	}

	int sumOfArray = 0;
	for(int element: simpleArray) {
		sumOfArray+=element;
	}

	cout<<"Sum: "<<sumOfArray;

	return 0;
}