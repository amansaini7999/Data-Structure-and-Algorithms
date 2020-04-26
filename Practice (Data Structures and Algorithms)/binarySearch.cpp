#include<iostream>
using namespace std;

int binarySearch(int arr[], int beg, int end, int key)
{
	int mid;

	mid = (beg+end)/2;

	if(beg > end)
		return -1;

	if(arr[mid] == key)
		return mid;

	else if(arr[mid] < key)
		binarySearch(arr, mid+1, end, key);
	else
		binarySearch(arr, beg, mid-1, key);
}

int main()
{
	int n, key, search;
	cin>>n;

	int arr[n];

	for(int i=0; i<n; i++)
		cin>>arr[i];

	cin>>key;

	int beg = 0, end = n-1;
	search = binarySearch(arr, beg, end, key);

	if(search == -1)
		cout<<"Element not found\n";
	else
		cout<<"Index : "<<search<<"\n";

	return 0;
}
