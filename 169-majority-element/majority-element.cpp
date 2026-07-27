class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        if(nums.size() == 1){
            return nums[0];
        }
        map<int,int>f;
        for(auto a : nums) {
            f[a]++;
        }
        for(auto a : f) {
            if(a.second > n/2){
                return a.first;
            }
        }
        return 0;
        
    }
};