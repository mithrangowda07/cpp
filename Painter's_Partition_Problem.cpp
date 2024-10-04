int sums(vector<int> &boards, int n){
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum+=boards[i];
    }
    return sum;
}

int max(int *arr,int k){
    int max_value=arr[0];
    for(int i = 1;i<k;i++){
        if(max_value<arr[i]){
            max_value=arr[i];
        }
    }
    return max_value;
}

int isPossible(vector<int> &arr,int k,int n,int mid){
    int kcount = 1;
    int store[k+1];
    int j=0;
    int boardpaint  = 0;
    for(int i = 0;i<n;i++){
        if(boardpaint+arr[i]<=mid){
            boardpaint+=arr[i];
        }
        else{
            store[j++]=boardpaint;
            kcount++;
            if(kcount>k || arr[i]>mid){
                return -1;
            }
            boardpaint = arr[i];
        }
    }

    store[j] = boardpaint;
    
    return max(store,j+1);
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int n = boards.size();
    int sum = sums(boards,n);
    int s = 0, e = sum;
    int ans = -1;
    
    while(s<=e){
        int mid = s + (e-s)/2;
        int possible = isPossible(boards,k,n,mid);
        if(possible!=-1){
            ans = possible;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}
