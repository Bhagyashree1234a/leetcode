class Solution {
public:
    int maxSum(vector<int>& nums) {
        int n = nums.size();
        map<int,int>f;
        for(auto a : nums) {
            f[a]++;
        }
        int sum = 0;
        int maxx = INT_MIN;
        for(auto a : f) {
            maxx=  max(maxx,a.first);
            if (a.first > 0 )
            sum+=a.first;
        }
        if (sum == 0) {
            return maxx;
        }
        return sum;

        
    }
};