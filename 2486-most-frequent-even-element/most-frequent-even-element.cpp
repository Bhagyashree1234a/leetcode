class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>mp;
        int maxx = 0;
        for(auto a : nums) {
            mp[a]++;
        }
        for(auto a : mp) {
            if(a.first%2 == 0){
                maxx = max(maxx, a.second);

            }
        }
        for(auto a : mp) {
            if(a.first%2==0 && a.second == maxx) {
                return a.first;
            }
        }
        return -1;
        

        
    }
};