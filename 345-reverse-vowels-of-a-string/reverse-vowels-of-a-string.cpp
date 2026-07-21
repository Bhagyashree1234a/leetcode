class Solution {
public:
    bool isVowels(char ch) {
        for(auto a: "aeiouAEIOU") {
            if (ch == a) return true;
        }
    return false;
    }
    
    string reverseVowels(string s) {
        int n = s.size();
        int  i = 0, j = n-1;  
        while (i < j) {
        if(isVowels(s[i]) && isVowels(s[j])) {
            swap(s[i],s[j]);
            i++;
            j--;
        }
        else if (!isVowels(s[i])) {
            i++;
            
            
        }
        else  {
            j--;

        }
        }
        return s;
         
        
    }
};