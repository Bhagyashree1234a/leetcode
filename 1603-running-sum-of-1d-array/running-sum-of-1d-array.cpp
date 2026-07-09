class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int i;
        vector<int> arr(n,0);
        for(i = 0; i < n; i++ )
        {
            sum = sum + nums[i];
            arr[i] = sum ;
        }
        return arr;

        
    }
};