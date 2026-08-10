class Solution {
public:
    string removeOuterParentheses(string s) {
        int c = 0;
        string ans = "";
        for(auto ch : s) {
            if (ch == '(') {
                if(c > 0) {
                    ans += '(';
                }
                c++;
            }
            else {
                 c--;
                if (c > 0 ) {
                    ans += ')';
                }
            }
        }
        return  ans;
    
        
    }
};