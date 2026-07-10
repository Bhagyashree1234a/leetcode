class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int i,j;
        int n=nums.size();
        vector<int>a;
        int d;
        for( i = 0; i < n; i++)
        {  vector<int> temp;
            int m = nums[i];
            int t =m;
            while(t>0)
            {
                d=t%10;
                temp.push_back(d);
                t=t/10;

            }
            for(j= temp.size()-1; j >= 0; j--)
            {
                a.push_back(temp[j]);
            }

        }
        return a;
    }
};