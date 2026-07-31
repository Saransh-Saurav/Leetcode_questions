class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        if(n<=1)return s;
        int maxLen=1;
        int start=0;
        for(int i=0;i<n;i++){
            //for odd length palindrome
            int left=i;
            int right=i;
            while(left>=0 && right<=n-1 && s[left]==s[right]){
                if(right-left+1>maxLen){
                    maxLen=right-left+1;
                    start=left;
                }
                right++;
                left--;
            }

            //for even length palindrome
            left=i;
            right=i+1;
            while(left>=0 && right<=n-1 && s[left]==s[right]){
                if(right-left+1>maxLen){
                    maxLen=right-left+1;
                    start=left;
                }
                right++;
                left--;
            }
        }

        return s.substr(start,maxLen);
    }
};