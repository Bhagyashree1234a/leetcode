class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        vector<int> ans;
        for ( i = 0; i < n; i++) {
            int m = nums[nums[i]];
            ans.push_back(m);
        }
        return ans;   
    }
};