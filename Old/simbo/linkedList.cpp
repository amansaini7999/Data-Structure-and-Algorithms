// 3 4 5 6

// ptr-->4



void lowerBound(int n){
  arr[] = {1, 1, 1, 2, 2, 3, 3, 3, 3, 3, 3, 4, 4, 4}

  while(beg<=end){
    int mid = (beg+end)/2
    if(arr[mid]>=3){
      end=mid;
    }
    else if(arr[mid]<3)
      beg=mid+1;
  }

  return mid;
}
