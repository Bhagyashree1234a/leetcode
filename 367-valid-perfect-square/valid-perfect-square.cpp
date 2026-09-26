class Solution {
public:
    bool isPerfectSquare(int num) {
     long long s = 0;
     long long e = num;
     while (s <= e) {
        long long m = s+(e-s)/2;
        long long ps = m*m;
        if(ps == num) {
            return true;
        }
        else if (ps > num) {
            e = m-1;
        }
        else {
            s = m+1;
        }
     }
     return false;
}
};