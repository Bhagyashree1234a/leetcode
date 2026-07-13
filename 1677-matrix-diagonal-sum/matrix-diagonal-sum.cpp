class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int i,j;
        int sum = 0;
        for ( i = 0; i < n; i++ ) {
            for ( j = 0; j < n ; j++) {
                if ( i == j || j == n-i-1) {
                    sum += mat[i][j];
                }
            }
        }
        return sum;

        
    }
};