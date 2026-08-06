class Solution {
public:
    int Digit_Ka_Product(int n){
        int i=1;
        while(n>0){
            i=i*(n%10);
            n/=10;
        }
        return i;
    }

    int smallestNumber(int n, int t) {
        int temp=n;
        while(temp<n+10){
            if(Digit_Ka_Product(temp)%t==0)return temp;
            temp++;
        }
        return -1;
    }
};