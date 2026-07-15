class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int i,j;
        int n = nums.size();
       unordered_map<int,int> fq;
        
        for(auto a : nums) {
            fq[a]++;
        }
        int ans =0;
        for(auto a : fq) {
            int f = a.second -1;
            ans = ans + (f*(f+1)/2);

        }
        return ans;

        
        
    }
};