class Solution {
public:
    char repeatedCharacter(string s) {
        set<int> st;
        for(auto a : s) {
            if(st.find(a)!= st.end()) {
                return a;
            }
            else {
                st.insert(a);
                
            }

        }
        return 0;
        
        
    }
};