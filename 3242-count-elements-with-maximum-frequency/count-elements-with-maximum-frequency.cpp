class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>mp;
        int ans = 0;
        int sum = 0;
        for(auto a : nums) {
            mp[a]++;
        }
        for(auto a: mp){
            ans= max(ans,a.second);

        }
        for(auto a : mp) {
            if(a.second == ans) {
                sum+=a.second;
            }
        }
        return sum;
        
    }
};