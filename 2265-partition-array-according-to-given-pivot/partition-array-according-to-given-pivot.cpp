class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> ans;
        int i;
        for ( i = 0; i < n; i++) {
            if(nums[i] < pivot) {
                ans.push_back(nums[i]);
            }
        }
        for ( i = 0; i < n; i++) {
            if(nums[i] == pivot) {
                ans.push_back(nums[i]);
            }
        }
        for ( i = 0; i < n; i++) {
            if(nums[i] > pivot) {
                ans.push_back(nums[i]);
            }
        }
        
        
        return ans;
        
    }
};