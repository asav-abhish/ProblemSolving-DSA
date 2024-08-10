// https://www.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1?category%5B%5D=Hash&company%5B%5D=Amazon&page=1&query=category%5B%5DHashcompany%5B%5DAmazonpage1company%5B%5DAmazoncategory%5B%5DHash

class Solution {
  public:
    int maxLen(vector<int>& arr, int n) {
        // Your code here
        map <int, int > m;
        int presum = 0, cnt = 0;
        
        for(int i=0; i<n; i++){
            presum +=arr[i];
            if(presum == 0){
                m[presum] = i;
                cnt = i+1;
            } 
            else if( m.find(presum) != m.end() ){
                cnt = max(cnt, (i-m[presum]) );
            }
            else{
                m[presum] = i;
            }
            
        }
        return cnt;
    }
};
