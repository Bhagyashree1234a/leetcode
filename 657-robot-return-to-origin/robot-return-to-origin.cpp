class Solution {
public:
    bool judgeCircle(string moves) {
        unordered_map<char,int> f;
        for (auto a : moves) {
            f[a]++;
        }
        for (auto a : f) {
            if(f['U']==f['D'] && f['R']==f['L']) {
                return true;
            }
        }
        return false;
    }
};