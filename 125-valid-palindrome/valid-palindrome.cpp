class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";
        string r = "";
       for(auto a : s) {
        if (isalnum(a)) {
            ans+=tolower(a);
        }
       }
        r = ans;
       
       reverse(ans.begin(),ans.end());
       return r == ans;
        
    }
};