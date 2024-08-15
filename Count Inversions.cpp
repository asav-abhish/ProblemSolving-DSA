// https://www.geeksforgeeks.org/problems/inversion-of-array-1587115620/1

private:
  
  long long mergetwosortedarray(long long *arr,long long s,long long e){
      long long cnt = 0;
    vector< long long int> temp;
    long long i = s;
    long long mid = (s+e) / 2;
    long long j = mid + 1;

    while(i <= mid && j <= e){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            cnt += (mid-i +1);
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid)  temp.push_back(arr[i++]);
    while(j<=e) temp.push_back(arr[j++]);
    for(long long i = 0; i<temp.size(); i++){
        arr[s+i] = temp[i];
    }
    return cnt;
}


long long mergesort(long long arr[],long long  s,long long  e){
    long long cnt = 0;
    //base case
    if(s>=e){
        return 0;
    }

    long long  mid = (s+e)/2;
    cnt += mergesort(arr,s,mid);
    cnt += mergesort(arr,mid+1,e);
    cnt += mergetwosortedarray(arr,s,e);
    return cnt;
}
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    public:
    long long int inversionCount(long long arr[], int n) {
        // Your Code Here
        return mergesort(arr,0,n-1);
        
    }
