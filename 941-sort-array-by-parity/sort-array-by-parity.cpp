class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n,0);
        int i = 0,j = n-1;
        for ( int x = 0 ; x < n; x++) {
            if (nums[x] % 2 == 0) {
                arr[i] = nums[x];
                i++;
            } else {
              arr[j] =nums[x];
              j--;
            }
        }
        return arr;
       
    }
};