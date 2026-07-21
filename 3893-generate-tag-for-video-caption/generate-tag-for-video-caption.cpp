class Solution {
public:
    string generateTag(string s) {
        string ans = "#";
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (isalpha(s[i])) {
                if(ans.size() == 1) {
                    ans+=tolower(s[i]);
                }
                else if (i > 0 && s[i-1] == ' ') {
                    ans+=toupper(s[i]);
                }
                else {
                    ans+=tolower(s[i]);
                }
            }
        }
        return ans.substr(0,100);
        
    }
};