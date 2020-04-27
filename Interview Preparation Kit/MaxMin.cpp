#include <bits/stdc++.h>

using namespace std;

// Complete the maxMin function below.
int maxMin(int k, vector<int> arr) {
  sort(arr.begin(), arr.end());
  int i, j, mpf=INT_MAX;

  for(i=0; i<=arr.size()-k; i++)
  {
    int  min, max;
    min=arr[i];
    max=arr[k+i-1];

    if((max-min)<mpf)
      mpf=(max-min);
  }
  return mpf;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item;
        cin >> arr_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        arr[i] = arr_item;
    }

    int result = maxMin(k, arr);
    cout<<result<<"\n";

    fout << result << "\n";

    fout.close();

    return 0;
}
