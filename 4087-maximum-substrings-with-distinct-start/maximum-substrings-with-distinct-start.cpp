class Solution {
public:
    int maxDistinct(string s) {
       unordered_map<char,int> f;
        int i  = 0;
        int count = 0;
        for(auto ch : s ) {
            f[ch - 'a']++;
        } 
        for(auto a : f) {
            if (a.second > 0) {
                count ++;
            }
        }
        return count;
        
    }
};