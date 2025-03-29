#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int j=0, i, k, n, a[10], temp;
	cin>>n>>k;
	
	//int m[k];
	
	for(i=0; i<n; i++)
	cin>>a[i];
	
	temp = k;
	int *min;
	while(temp--)
	{
		min = std::min_element(a+j, a+k+j);
		j++;
		cout<<*min<<" ";
	}
	
	/*while(k<=n)
	{
		min = 999999;
		for(i=j; i<k; i++)
		{
			if(a[i] < min)
			{
				min = a[i];
				m[j] = min;
			}
		//	k++;
		}
		j++;
		k++;
	}*/
	
	//for(i=0; i<j; i++)
		//cout<<m[i]<<" ";
}
