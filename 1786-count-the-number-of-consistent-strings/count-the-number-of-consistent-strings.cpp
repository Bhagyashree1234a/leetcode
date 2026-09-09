class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;
        for(int i = 0; i < words.size(); i++) {
            int found = 0;
            for (int j = 0 ; j <words[i].size(); j++) {
                for (int k = 0; k < allowed.size(); k++) {
                    if(allowed[k] == words[i][j])
                    {
                        found++;
                        break;
                    }
                }
            }
                if(found == words[i].size()) {
                    count ++;
                }

            }
        return count;
        
    }
};