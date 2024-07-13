// https://leetcode.com/problems/remove-digit-from-number-to-maximize-result/

class Solution {
public:
    string removeDigit(string number, char digit) {
        string temp = number;
        int size = number.length();
        string ans="";
        for(int i=0; i<size; i++){
            if(digit == number[i]){
                temp.erase(i,1);
                ans = max(temp,ans);
                temp = number;
            }
        }
        return ans;
    }
};
