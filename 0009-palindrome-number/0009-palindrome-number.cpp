class Solution {
public:
    bool isPalindrome(int x) {
        int i=x;
        int num;
        long int check=0;
        while(i>0){
            num=i%10;
            check=check*10+num;
            i=i/10;
        }
        if(check==x) return true;
        else return false;
    }
};