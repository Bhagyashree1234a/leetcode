class Solution {
public:
    int maxFreqSum(string s) {
    unordered_map<char,int> freqv;
    unordered_map<char,int> freqc;
    for(char ch=0;ch<s.size();ch++)
    {
    if(s[ch]=='a'||s[ch]=='e'||s[ch]=='u'||s[ch]=='i'||s[ch]=='o')
    {
        freqv[s[ch]]++;
    }
    else
    {
        freqc[s[ch]]++;
    }
        
    }
    int mv=0;
    int mc=0;
    for(auto c:freqv)
    {
      mv=max(mv,c.second);
    }
    for(auto c:freqc)
    {
      mc=max(mc,c.second);
    }
    return mv+mc;
}
};
