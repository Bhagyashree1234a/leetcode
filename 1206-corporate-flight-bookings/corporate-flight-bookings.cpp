class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        
        vector<int>ans(n,0);
        //[1,3,10],[2,3,10]
        int m = bookings.size();
        for(int i = 0; i < m; i++) {
            int f = bookings[i][0] , l = bookings[i][1], s = bookings[i][2];
             ans[f-1]+=s;
             if(l!=n){
                ans[l] -= s;
             }
            }
            for(int i = 1; i < n; i++) {
                ans[i] = ans[i]+ans[i-1];
            }
        
        return ans;
    }
};