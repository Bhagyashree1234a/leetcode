class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1;
        set<int>s2;
        vector<int>ans;
        for(auto a : nums1) {
            s1.insert(a);
        }
        for(auto a : nums2) {
            s2.insert(a);
        }
        for(auto a : s1){
            if(s2.find(a) != s2.end()) {
                ans.push_back(a);
            }
        }
        return ans;
        
    }
};