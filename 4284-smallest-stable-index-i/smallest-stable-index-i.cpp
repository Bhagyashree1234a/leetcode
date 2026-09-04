class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int mx = INT_MIN;
        int mn = INT_MAX;
        int res;
        for(int i = 0; i < nums.size(); i++) {
            mx = max(mx , nums[i]);
            mn = INT_MAX;
        
            for(int  j = i ;j < nums.size(); j++ ) {
            mn = min(mn, nums[j]);
            }
            res = mx-mn;
            if (res <= k) {
                return i;
            }
    }
    return -1;
        
        
    }
};