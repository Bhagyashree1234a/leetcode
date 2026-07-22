class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& m) {
        int n = m.size();
        int n1 = m[0].size();
        vector<int>ans;
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = 0; j < n1; j++) {
                sum+=m[i][j];
            }
            ans.push_back(sum);
        }
        return ans;
        
    }
};