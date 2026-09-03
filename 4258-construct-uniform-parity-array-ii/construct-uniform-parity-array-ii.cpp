class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        bool even = false;
        bool odd = false;
        int mn = nums1[0];
        for (int i = 0 ; i < nums1.size(); i++ ) {
            if(nums1[i] % 2 == 0) {
                even = true;
            }
            else {
                odd = true;
            }
            mn = min(mn , nums1[i]);
           
        }
        if(odd && even ) {
            if(mn % 2 == 0 ){
           return false;
        }
    }
    return true;
        
    }
};