int threeSumClosest(vector<int> arr, int target) {
    // Your code goes here
    int ans, min=INT_MAX;
    sort(arr.begin(), arr.end());
    for(int i=0; i<arr.size(); i++)
    {
        int l=i+1;
        int r=arr.size()-1;

        while(l<r)
        {
            int sum=arr[i]+arr[l]+arr[r];

            if(abs(sum-target)<min || (abs(sum-target)<=min && sum>ans))
            {
                min=abs(sum-target);
                ans=sum;
            }

            if(sum<target)
            l++;

            else
            r--;
        }
    }
    return ans;
}
