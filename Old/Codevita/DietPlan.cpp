#include<bits/stdc++.h>
#define F first
#define S second
using namespace std;

int fcnt = 0;
int fp = INT_MAX,fc = INT_MAX,ff =INT_MAX;

vector<int>temp;

void fx(vector<pair<int,pair<int,int>>> &v,int p,int c,int f)
{
   vector<int>ans;
   int sumx =0,sumy=0,sumz=0;
   int n = v.size();
   int i =0;

  int item[10] = {0};

  while(1)
  {
    while(sumx + v[temp[i]].F <= p and sumy + v[temp[i]].S.F <= c and sumz + v[temp[i]].S.S <= f)
    {
      sumx += v[temp[i]].F;
      sumy += v[temp[i]].S.F;
      sumz += v[temp[i]].S.S;
      item[temp[i]]++;
      i = (i+1)%n;
    }

    if(i == 0)break;
       i =0;
    }

    int cnt =0;
    for(int i=0;i<n;i++){
    	if(item[i] > 0){
    		cnt++;
    	}
    }

    p-=sumx;
    c-=sumy;
    f-=sumz;

    if(fcnt < cnt){
       fcnt = cnt;
       fp = p;
       fc = c;
       ff = f;
    }else if(fcnt == cnt){
    	if(fp > p){
    		fp = p;
    		fc = c;
    		ff = f;
    	}
    }
  }


  void gx(vector<pair<int,pair<int,int>>> &v,int p,int c,int f){
  	do{
  		fx(v,p,c,f);
  	}while(next_permutation(temp.begin(),temp.end()));
     cout<<fp<<" "<<fc<<" "<<ff;
  }

int main(){

  int pp,cc,ff;
	char x;
	cin>>pp>>x;
	cin>>cc>>x;
	cin>>ff>>x;

	cin.ignore();

  vector<pair<int,pair<int,int>>> v;

  string S,T;

  getline(cin,S);

  stringstream X(S);

  while(getline(X,T,'|')){
    int i =0;
    int val =0;
    pair<int,pair<int,int>>tp;

    while( i < (int)T.size()){

    if(T[i] == 'P'){
      tp.F = val;
      val =0;
      }else if(T[i] == 'C'){
        tp.S.F = val;
        	val =0;
        }else if(T[i] == 'F'){
        	tp.S.S = val;
        	val =0;
        }else if(T[i] >= '0' and T[i] <='9'){
              val = val *10 + T[i]-'0';
        }

        i++;
      }
       v.push_back(tp);
    }

    for(int i=0;i<(int)v.size();i++){
        temp.push_back(i);
    }

    gx(v,pp,cc,ff);

	return 0;
}
