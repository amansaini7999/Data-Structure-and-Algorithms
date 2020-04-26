#include<iostream>
using namespace std;

int main()
{
	int n, x, y, nn, q;
	cin>>n;
	
	q = n%4;
	
	if(n>0)
	{
		if(q == 1)
		{
			if(n == 1)
			{
				x = 10;
				y = 0;
			}
			else
			{
				nn = n*10;
				nn = nn-10;
				nn = nn/2;
				y = -nn;
				x = nn+10;
			}
		}
	
		else if(q == 2)
		{
			nn = n*5;
			x = nn;
			y = nn+10;		
		}
	
		else if(q == 3)
		{
			nn = n*10+10;
			nn = nn/2;
			x = -nn;
			y = nn;	
		}
	
		else
		{
			nn = n*5;
			x = -nn;
			y = -nn;
		}
	
		cout<<x<<" "<<y<<"\n";
	}
	
	else
	{
		cout<<"Invalid Data\n";
	}
}
