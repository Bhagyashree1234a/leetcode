class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int maxx = INT_MIN;
        vector<int>ans;
        for(int i = 0; i < points.size(); i++) {
            for(int j = 0; j < points[i].size(); j++) {
                if(j == 0) 
                    ans.push_back(points[i][j]);

            }
        }
        sort(ans.begin(),ans.end());
        for(int i = 1; i < ans.size(); i++) {
            int res = abs(ans[i-1]- ans[i]);
            maxx = max(maxx, res);

        }
        return maxx;
        
    }
};