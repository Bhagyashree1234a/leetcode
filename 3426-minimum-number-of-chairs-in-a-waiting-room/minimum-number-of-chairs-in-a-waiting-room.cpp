class Solution {
public:
    int minimumChairs(string s) {
        int c = 0;
        int maxx=0;
        for( auto a : s) {
            if (a == 'E') {
                c++;
            }
            else 
            {
                 c--;
            }
            maxx = max(maxx,c);
        }
        return maxx;
        
    }
};