class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int i,j;
        int n = nums.size();
        int sum = 0;
        for( i = 0; i < n; i++)
        {
            for(j = i+1; j < n; j++ )
            {
                if((nums[i]+nums[j]) < target) 
                {
                    sum++;
                }
            }
        }
        return sum;



        
    }
};