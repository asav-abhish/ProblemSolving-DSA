// https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1

public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        int sum = 0;
        int maxLen = 0;
        unordered_map<int, int> m;
        for(int i=0; i<N; i++){
            sum+=A[i];
            
            if(sum == K){
                maxLen = max(maxLen, i+1);
            }
            int rem = sum - K;
            if( m.find(rem) != m.end() ){
                int len = i - m[rem];
                maxLen = max(maxLen, len);
            }
            if(m.find(sum) == m.end()) m[sum] = i;
            
        }
        return maxLen;
    } 
