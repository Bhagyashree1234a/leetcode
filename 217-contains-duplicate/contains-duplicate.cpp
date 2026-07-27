class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> f;
        int n = nums.size();
        for (auto a : nums) {
            f[a]++;
        }
        for (auto a : f) {
            if (a.second > 1)
             return true;
        }
        return false;
        
        
    }
};