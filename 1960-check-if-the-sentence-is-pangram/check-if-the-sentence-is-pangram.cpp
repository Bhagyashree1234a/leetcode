class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char>l;
        for(auto a:sentence)
        {
            l.insert(a);
        }
        return (l.size())==26;
        
    }
};