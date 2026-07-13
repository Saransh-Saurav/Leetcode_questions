class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string s="123456789";
        vector<int>ans;
        for(int i=0;i<s.size();i++){
            for(int len=2;i+len<=s.size();len++){
                int num=stoi(s.substr(i,len)); // index i se length len-1 tkk int bna deta h,i.e len not included isiliye 2 se start hua instead of 1
                if(num>=low && num<=high)ans.push_back(num);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};