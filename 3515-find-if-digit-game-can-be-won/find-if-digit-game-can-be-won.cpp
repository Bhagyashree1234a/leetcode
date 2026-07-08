class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int a=0;
        int b=0;
        int n=nums.size();
        for(int i = 0; i < n; i++)
        {
            if( nums[i] < 10)
            {
                a = a + nums[i];
            }
            else
            {
                b = b + nums[i];
            }

        }  
        if(a==b)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};