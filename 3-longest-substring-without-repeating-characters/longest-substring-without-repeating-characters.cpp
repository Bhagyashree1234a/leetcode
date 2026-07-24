class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int i = 0,j = 0, ans = 0,n = s.size();
        for ( int j = 0; j < n; j++) {
            mp[s[j]]++;
    
        while(mp[s[j]] > 1) {
            mp[s[i]]--;
            i++;
        } 
        if(mp[s[j]] == 1) {
            ans = max(ans,(j-i)+1);
        }
    }
        return ans;

    
        
    }
};