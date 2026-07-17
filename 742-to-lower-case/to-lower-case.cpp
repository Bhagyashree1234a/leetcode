class Solution {
public:
    string toLowerCase(string s) {
        for(auto &a : s)  {
            if ( a >= 'A' && a <= 'Z') {
                a+=('a'-'A');
            }
        }
        return s;

        
    }
};