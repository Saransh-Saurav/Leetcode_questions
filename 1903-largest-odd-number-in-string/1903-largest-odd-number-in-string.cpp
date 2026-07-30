class Solution {
public:
    string largestOddNumber(string num) {
        string ans="";
        int n=num.size()-1;
        while(n>=0){
            if((num[n]-'0')%2==1){
                ans=num.substr(0,n+1);
                break;
            }
            n--;
        }
        return ans;
    }
};