class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans = "";
        for(auto w : words) {
            int sum = 0;
            for (auto ch : w) {
                sum+=weights[ch-'a'];
            }
            int x = sum%26;
            ans+=char('z'-x);
        }
        return ans;
        
    }
};