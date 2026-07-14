class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> f;
        int n = nums.size();
        int i;
        for (i=0;i<n;i++) {
            f[nums[i]]++;
        }
        for (auto a : f) {
            if (a.second > 1)
             return true;
        }
        return false;
        
        
    }
};