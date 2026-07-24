class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int ans = 0, zc = 0;
        int i = 0;
        int n = nums.size();
        for (int j = 0; j < n; j++) {
            if (nums[j] == 0) zc++;
            while(zc > k) {
                if(nums[i] == 0)
                zc--;
                i++;
            }
            if (zc <= k) {
                ans = max(ans ,(j-i)+1);
            }
        }
        return ans;
        
    }
};