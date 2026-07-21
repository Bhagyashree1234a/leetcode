class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        int n = cost.size()-1;
        vector<int> ans(n,0);
        for (int i = 0; i < n; i++) {
            if ( cost[i] < cost[i+1]) {
                cost[i+1] = cost[i];
            }
        }
        return cost;
        
    }
};