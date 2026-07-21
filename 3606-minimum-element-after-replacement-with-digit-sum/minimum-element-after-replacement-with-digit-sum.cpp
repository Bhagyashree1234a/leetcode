class Solution {
public:
    int minElement(vector<int>& nums) {
        int n = nums.size();
        int minn = INT_MAX;
        for ( int i = 0; i < n; i++) {
            int m = nums[i];
            int sum = 0;
            while(m!= 0) {
                sum+=(m%10);
                m = m/10;
            }
            minn = min(minn,sum);
        }
         return minn;
        
    }
};