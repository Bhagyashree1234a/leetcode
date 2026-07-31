class Solution {
public:
    int minimumPushes(string word) {
        map<char,int>f;
        int ans = 0;
        vector<int> v;
        for(auto a : word) {
            f[a]++;
        } 
        for(auto a : f){
            v.push_back(a.second);
        }
        sort(v.begin(),v.end(),greater<int>());

        for( int i = 0 ; i < v.size(); i++) {
            if (i < 8) ans+=v[i];
            else if (i < 16) ans+=2*v[i];
            else if (i < 24) ans+=3*v[i];
            else ans+=4*v[i];

        }
    
    return ans;
        
       

        
    }
};