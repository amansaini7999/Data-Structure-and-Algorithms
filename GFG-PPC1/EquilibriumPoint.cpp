// { Driver Code Starts
#include <iostream>
using namespace std;

// Position this line where user code will be pasted.

int equilibriumPoint(long long a[], int n);

int main() {

    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        long long a[n];

        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }

        cout << equilibriumPoint(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends


// Function to find equilibrium point
// a: input array
// n: size of array
int equilibriumPoint(long long a[], int n) {
  int i;
  long long sum=0, lsum=0;
  for(i=0; i<n; i++)
    sum+=a[i];

  for(i=0; i<n; i++)
  {
    sum-=a[i];

    if(lsum == sum)
      return i+1;

    lsum+=a[i];
  }
  return -1;
}
