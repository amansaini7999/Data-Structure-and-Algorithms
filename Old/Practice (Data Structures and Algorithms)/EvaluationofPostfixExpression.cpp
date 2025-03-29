#include<bits/stdc++.h>
using namespace std;

stack<int> s;

void printStack()
{
  while(!s.empty())
  {
    cout<<s.top()<<" ";
    s.pop();
  }
}

void process(char str[])
{
  for(int i=0; str[i]!='\0'; i++)
  {
    if(isdigit(str[i]))
      s.push(str[i]-'0');

    else
    {
      int val1 = s.top();
      s.pop();
      int val2 = s.top();
      s.pop();

      switch(str[i])
      {
        case '+': s.push(val2+val1); break;
        case '-': s.push(val2-val1); break;
        case '*': s.push(val2*val1); break;
        case '/': s.push(val2/val1); break;
      }
    }

  }
}

int main()
{
  int t;
  char str[100];
  cin>>t;

  while(t--)
  {
    cin>>str;
    process(str);
    printStack();
    cout<<"\n";
  }

  return 0;
}
