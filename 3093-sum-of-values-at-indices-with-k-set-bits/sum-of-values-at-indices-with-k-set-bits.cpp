class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int n = nums.size();
        long sum = 0,i;
        for ( i = 0; i < n; i++){
            int count = 0;
            int t=i;
            while ( t > 0) {
            if ( t % 2 == 1) {
                count ++;
            
            }
            t=t/2;
            }
            if ( count == k ) {
                sum = sum + nums[i];
            }
        
        }
        return sum ;
        

        
    }
};