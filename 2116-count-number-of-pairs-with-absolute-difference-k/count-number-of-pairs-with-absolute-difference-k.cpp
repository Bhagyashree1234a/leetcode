class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int j,i;
        int n=nums.size();
        int count=0;
        for ( i = 0; i < n; i++)
        {
            for ( j = i+1; j < n; j++ )
            {
                if (abs(nums[i]-nums[j])==k)
                {
                    count++;
                }
            }
        }
        return count;
        
    }
};