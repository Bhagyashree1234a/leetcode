class Solution {
public:
    long long sumAndMultiply(int n) {
        long long d;
        long long rev=0,sum=0,d1,f=0;
        while(n>0)
        {
            d=n%10;
            sum+=d;

            if(d!=0)
            {
                rev=rev*10+d;
            }
            
            n=n/10;
        }
        while(rev>0)
            {
                d1=rev%10;
                f=f*10+d1;
                rev=rev/10;
            }
        return f*sum;
    }
     
};