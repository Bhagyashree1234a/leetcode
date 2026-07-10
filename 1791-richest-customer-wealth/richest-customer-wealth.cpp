class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int i,j; 
        int maxx=0;
        for( i = 0; i < accounts.size(); i++)
        { int sum = 0;
            for( j = 0; j <accounts[i].size() ; j++)
            {
                sum=sum+accounts[i][j];
                maxx=max(maxx,sum);
                
            }

        }

        return maxx;


        
    }
};