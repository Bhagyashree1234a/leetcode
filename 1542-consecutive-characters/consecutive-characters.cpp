class Solution {
public:
    int maxPower(string s) {
        int n = s.size();
        int i ,maxx = 1;
        int c = 1;
        for ( i=0; i < n-1; i++ ) {
            if (s[i] == s[i+1] ) {
            c++;
        }
            else {
                 c= 1;
            }
            
            maxx = max(maxx,c);
        }
        return maxx;

        
       
        
        
    }
};