class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string>st;
        vector<string> morse = {
            ".-", "-...", "-.-.", "-..", ".", "..-.", "--.",
            "....", "..", ".---", "-.-", ".-..", "--", "-.",
            "---", ".--.", "--.-", ".-.", "...", "-", "..-",
            "...-", ".--", "-..-", "-.--", "--.."
        };
        for(auto w : words) {
            string t = "";
            for(auto a : w) {
                t+=morse[a - 'a'];
            }
            st.insert(t);
        }
        return st.size();
    }
};