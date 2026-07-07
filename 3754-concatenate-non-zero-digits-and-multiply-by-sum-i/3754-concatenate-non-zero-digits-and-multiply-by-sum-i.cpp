class Solution {
public:
    long long sumAndMultiply(int n) {
        int rev=0;
        while(n>0){
            rev=rev*10+n%10;
            n/=10;
        }
        int x=0;
        int sum=0;
        while(rev>0){
            if(rev%10!=0){
                x=x*10;
                x+=rev%10;
                
            }
            sum+=rev%10;
            rev=rev/10;
        }
        return 1ll*x*sum;
    }
};