class Solution {
public:
    int maxProduct(int n) {
       int temp=n;
       vector<int>ans;
       while(temp>0){
        int i=temp%10;
        ans.push_back(i);
        temp/=10;
       }
       int max1=*max_element(ans.begin(), ans.end());
       auto it = max_element(ans.begin(), ans.end());
       *it = 0;
       int max2=*max_element(ans.begin(), ans.end());
       return max1*max2;
    }
};