int peakElement(int arr[], int n)
{
   // Your code here
   if(arr[0]>arr[1])
        return 0;
    else if(arr[n-1]>arr[n-2])
        return n-1;

    for(int i=1; i<n-1; i++)
    {
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
            return i;
    }
}
