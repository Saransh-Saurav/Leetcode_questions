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
       sort(ans.begin(),ans.end());
       return ans[ans.size()-1]*ans[ans.size()-2];
    }
};