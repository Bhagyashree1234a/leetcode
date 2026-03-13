class Solution {
    public int addDigits(int num) {
    
        while(num>=10)
        {
            int rev=0;
        while(num>0)
             {
            
                 int d=num%10;
                 rev=rev+d;
                 num=num/10;
              }
              num=rev;
              
        }
         return num;
        
    }
}