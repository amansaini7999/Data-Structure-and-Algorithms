#include<bits/stdc++.h>
using namespace std;

vector<long> maxMin(vector<string> operations, vector<int> x)
{
	vector<long> v;
	multiset<int> s;

	for(int i=0; i<operations.size(); i++)
	{
		if(operations[i]=="push")
			s.insert(x[i]);
		else
			s.erase(x[i]);

		int min = *s.begin();
		int max = *s.rbegin();

		v.push_back(min*max);
	}

	return v;
}

int main()
{
	int n;
	cin>>n;

	vector<int> x;
	vector<string> operations;

	for(int i=0; i<n; i++)
	{
		string s;
		cin>>s;
		operations.push_back(s);
	}

	for(int i=0; i<n; i++)
	{
		int a;
		cin>>a;
		x.push_back(a);
	}

	vector<long> v = maxMin(operations, x);

	vector<long> :: iterator itr;

	for(itr=v.begin(); itr!=v.end(); itr++)
		cout<<*itr<<"\n";

	return 0;
}
