// https://www.interviewbit.com/problems/subarray-with-given-xor/

int Solution::solve(vector<int> &A, int B) {
    int presum = 0;
    int cnt =0;
    map<int,int> m;
    m[0] = 1;
    for(int i=0; i<A.size(); i++){
        presum = presum ^ A[i];
        int rem = presum ^ B;
        cnt += m[rem];
        m[presum]++ ; 
    }
    return cnt;
}
