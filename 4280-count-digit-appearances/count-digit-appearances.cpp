class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int i;
        int n = nums.size();
        int d;
        int count =0;
        for ( i = 0; i < n; i++)
        {
            int m = nums[i];
            while( m!=0 ) {
                d = m % 10;
                if (d == digit)
                {
                    count++;
                }
                m = m / 10;

            }
        }
        return count;
    }
};