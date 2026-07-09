class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int  n = candies.size();
        vector< bool > ans2(n,false);
        int max =candies[0];
        for( int i = 1; i < n; i++ )
        {
 
            if(candies[i] > max)
            {
              max = candies[i]; 
            }
        }
            for(int i =0 ; i < n; i++){
                if(candies[i]+extraCandies >= max )
                {
                    ans2[i] = true;
                    
                }
            }
        return ans2;
                
    }
};