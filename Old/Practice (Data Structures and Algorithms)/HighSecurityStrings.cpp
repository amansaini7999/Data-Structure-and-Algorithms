#include<bits/stdc++.h>
using namespace std;

int getStrength(string password, int weight_a)
{
  int weights[26], k=weight_a, t=0, ct=0;
  char i;

  for(i='a'; i<='z'; i++)
  {
    if(ct>=26-weight_a)
      weights[i] = t++;
    else
      weights[i] = k++;
    ct+=1;
  }

  for(i='a'; i<='z'; i++)
    cout<<weights[i]<<" ";
  cout<<"\n";

  for(int z=0; z<password.length(); z++)
    cout<<weights[password[z]]<<" ";
  cout<<"\n";

  int sum=0;
  for(int z=0; z<password.length(); z++)
    sum+=weights[password[z]];

  return sum;
}

int getStrengthUsingMap(string password, int weight_a)
{
  map<char, int> weights;
  int k=weight_a, t=0, ct=0;
  char i;

  for(i='a'; i<='z'; i++)
  {
    if(ct>=26-weight_a)
      weights.insert(pair<char, int>(i, t++));
    else
      weights.insert(pair<char, int>(i, k++));
    ct+=1;
  }

  for(i='a'; i<='z'; i++)
    cout<<weights[i]<<" ";
  cout<<'\n';

  int sum=0;
  for(int z=0; z<password.length(); z++)
    sum+=weights[password[z]];

  return sum;
}

int main()
{
  string password="aaaaa";
  int weight_a=1;

  //int strength = getStrength(password, weight_a);
  //cout<<strength<<"\n";

  int strength = getStrengthUsingMap(password, weight_a);
  cout<<strength<<"\n";

  return 0;
}
