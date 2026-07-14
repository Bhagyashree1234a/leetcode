class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        map<int,int> f;
        int n = nums.size();
        int i = 0;
        int sum = 0;
        for (i = 0; i < n ;i++)
        {
            f[nums[i]]++;
        }
        for (auto a : f)
        {
            if (a.second % k == 0)
            {
                sum += (a.first*a.second);
            }
        }
        return sum;

        
    }
};