class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int,int> mp;
        int i = 0, n = nums.size(), sum = 0,ans = 0;
        for ( int j = 0; j < n; j++) {
            mp[nums[j]]++;
        
        while(mp[nums[j]] > 1) {
            mp[nums[i]]--;
            sum-=nums[i];
            i++;
        }
        if( mp[nums[j]]==1) {
            sum+=nums[j];
            ans = max(ans,sum);
        }
        }
        return ans;
        
    }
};