class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        sort(people.begin(),people.end());
        int i = 0, j = n-1,b = 0;
        while(i <= j) {
            if(people[i] + people[j] <= limit ) {
                b++;
                i++;
                j--;
            }
            else {
                b++;
                j--;
            }
        } 
        return b;
        
    }
};