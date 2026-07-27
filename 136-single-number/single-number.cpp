class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>mp;
        for(auto a : nums) {
            mp[a]++;
        }
        for (auto a : mp) {
            if (a.second == 1){
                return a.first;
            } 
        } 
        return 0;
        
        
    }
};