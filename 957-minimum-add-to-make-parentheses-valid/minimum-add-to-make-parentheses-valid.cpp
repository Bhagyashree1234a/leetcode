class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        //int count = 0;
        for(auto a : s) {
            if(a == '(') {
                st.push(a);
            } else {
            if(!st.empty() && st.top() == '(') {
              st.pop();

            }
            else {
                st.push(a);
            }
            }
        }
        return st.size();
        
    }
};