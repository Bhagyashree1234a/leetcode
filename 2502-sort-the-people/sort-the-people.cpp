class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string,greater<int>> m;
        int n = heights.size();
        for (int i = 0; i < n; i++) {
            m[heights[i]] = names[i];
        }
        vector<string> ans;
        for (auto a : m) {
            ans.push_back( a.second);
        }
       return ans;


        
    }
};