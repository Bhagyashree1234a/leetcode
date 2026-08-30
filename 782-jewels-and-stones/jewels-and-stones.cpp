class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        set<int>st;
        int count = 0;
        for(auto a : jewels) {
            st.insert(a);
        }
        for(auto a : stones) {
            if(st.find(a)!=st.end()) {
                count++;
            }
        }
        return count;
        
    }
};