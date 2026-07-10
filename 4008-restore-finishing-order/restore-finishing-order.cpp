class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        int n = order.size();
        int m = friends.size();
        vector<int> ans(m);
        int i,j,k=0;
        for (i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++)
            {
                if (  friends[j] == order[i] )
                {
                    //ans.push_back(friends[j]);
                    ans[k]=order[i];
                    k++;
                }
            }
        }
        return ans;
        
    }
};