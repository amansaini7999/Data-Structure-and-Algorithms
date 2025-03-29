#include <bits/stdc++.h>

using namespace std;

int simplArraySum(vector<int> simpleArray) {
	int sumOfArray = 0;
	for(int element: simpleArray) {
		sumOfArray+=element;
	}

	return sumOfArray;
}

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

	cout<<"Sum: "<<simplArraySum(simpleArray);

	return 0;
}