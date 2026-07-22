class Solution {
public:
    string defangIPaddr(string a) {
        int n = a.size();
        string ans = "";
        for(auto ch : a) {
            if(ispunct(ch)) {
                 ans+= "[.]";
            }
            else
            ans += ch;

        }
        
        return ans;
        
    }
};