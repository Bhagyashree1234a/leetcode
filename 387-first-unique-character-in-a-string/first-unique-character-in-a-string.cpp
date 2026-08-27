class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int>freq;
        for(auto a : s){
            freq[a - 'a']++;
        }
        for(int i=0;i<s.size();i++)
        {
            if(freq[s[i] - 'a']==1)
            {
                return i;
            }
        }
        return -1;
        
            
            
        
    }
};