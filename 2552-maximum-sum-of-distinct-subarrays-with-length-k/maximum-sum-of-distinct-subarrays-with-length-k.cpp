class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long sum = 0;
        //long long maxx = 0;
        unordered_map<int,int> mp;
        int i = 0;
        for ( int j = 0; j < k; j++) {
            sum+=nums[j];
            mp[nums[j]]++;
        }
        long long ans = (mp.size()==k?sum:0);
        for(int j = k; j < nums.size(); j++) {
            sum-=nums[i];
            mp[nums[i]]--;
            if(mp[nums[i]] == 0) mp.erase(nums[i]);
            sum+= nums[j];
            mp[nums[j]]++;
            if(mp.size()==k) {
                ans = max(ans,sum);
            }
            i++;
        }
        return ans;

        
    }
};