// https://leetcode.com/problems/second-largest-digit-in-a-string/submissions/1319576999/

class Solution {
public:
    int secondHighest(string s) {
        int max2 = -1;

        int max1 = -1;
        for(int i = 0; i < s.length(); i++){
            int ch = s[i] - '0';
            if(ch >= 0 && ch <= 9){
                if(ch > max1){
                    max2 = max1; 
                    max1 = ch;
                }
                else if(ch > max2 && ch != max1){
                    max2 = ch;
                }
            }
        }
        return max2;
    }
};
