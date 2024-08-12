// https://leetcode.com/problems/palindrome-number/

class Solution {
public:
    bool isPalindrome(int x) {
        if ( x < 0 ){
            return false;
        }

        long long sum = 0;
        int b = x;
        while(x > 0){
            sum =  sum * 10 + x % 10;
            x /= 10;
        }
        if(b == sum) return true;
        else  return false;
    }
};
