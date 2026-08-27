class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int>mp;
        int sum = 0;
        for( auto a : nums) {
            mp[a]++;
        }
        for(auto a : mp) {
            if (a.second == 1) {
                sum+=a.first;
            }
        }
        return sum;
        
    }
};