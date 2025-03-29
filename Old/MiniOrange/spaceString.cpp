#include<bits/stdc++.h>
using namespace std;

void possibleCombinationsHelp(string s, map<string, int> umap, int n, string ans){
  for(int i=1; i<=n; i++){
    string pref = s.substr(0, i);

    if(umap.find(pref)!=umap.end()){
      if(i==n){
        ans+=" "+pref;
        cout<<ans<<"\n";
        return;
      }

      possibleCombinationsHelp(s.substr(i, n-i), umap, n-i, ans + " " + pref);
    }
  }
}

void possibleCombinations(string s, map<string, int> umap){
  string ans = "";
  possibleCombinationsHelp(s, umap, s.size(), ans);
  return;
}

int main(){
  string s = "thisisasentence";
  map<string, int> umap;

  umap["this"] = 1;
  umap["is"] = 1;
  umap["a"] = 1;
  umap["sentence"] = 1;
  umap["th"] = 1;

  possibleCombinations(s, umap);

  return 0;
}
