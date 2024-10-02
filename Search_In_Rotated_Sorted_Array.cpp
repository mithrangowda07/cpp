int pivot_element(vector<int>& arr,int n){
  int s=0,e=n-1;
  int mid = s +(e-s)/2;
  while(s<e){
    if(arr[mid]>=arr[0])
      s=mid+1;
    else
      e=mid;
    mid = s +(e-s)/2;
  }
  return s;
}

int binary_search(vector<int>& arr,int s,int e,int k){
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]>k){
            e=mid-1;
        } else {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int search(vector<int>& arr, int n, int k)
{
    int pivot = pivot_element(arr,n);
    if(k>=arr[pivot] && k<=arr[n-1]){
        return binary_search(arr,pivot,n-1,k);
    }
    else{
        return binary_search(arr,0,pivot-1,k);
    }

}
