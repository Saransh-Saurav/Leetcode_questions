class Solution {
public:
    int reverse(int x) {
        int i=x;
        int num;
        int rev=0;
        while(i!=0){
            num=i%10;
            if (rev> INT_MAX/10||(rev==INT_MAX/10 && num>7))return 0;
            if (rev< INT_MIN/10||(rev==INT_MIN/10 && num<-8))return 0;
            rev=rev*10 +num;
            i=i/10;
        }
        
        return rev;
    }
};