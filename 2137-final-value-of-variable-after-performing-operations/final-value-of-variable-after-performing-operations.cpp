class Solution {
public:
    int finalValueAfterOperations(vector<string>& o) {
        int i;
        int X=0;
        int n = o.size();
        for (i = 0; i < n; i++)
        {
            if(o[i] == "--X" || o[i] == "X--") {
                 X--;
            }
            else {
                 X++; 
            }
        }
            return X;
            
           
    }
};