class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int l = 0;
        int h = nums.size() - 1;
        while(l <= h) {
            int m = l+(h-l/2);
            if (nums[m] == target) {
                ans.push_back(m);
            int i = m -1;
            while(i >= 0 && nums[i] == target) {
                ans.push_back(i);
                i--;
            }
            int j = m+1;
            while( j < nums.size() && nums[j] == target) {
                ans.push_back(j);
                j++;
            }
            sort(ans.begin(),ans.end());
            return ans;
            }

            else if( nums[m] <= target) {
                l = m+1;
            }
            else {
                h = m-1;
            }
        }
        return ans;
        
    }
};