// https://www.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1?track=DSASP-Searching&amp%253BbatchId=154

public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> &arr, long long n, long long x) {

        // Your code here
        long long ans = -1;
        long long low = 0;
        long long high = n-1;
        
        while(low <= high){
            long long mid = low +  (high - low) /2;
            if (arr[mid] == x){
                return mid;
            }
            else if(arr[mid] < x ){
                ans = mid;
                low = mid+1;
            }
            else{
                high = mid - 1;
            }
        }
        return ans;
    }
