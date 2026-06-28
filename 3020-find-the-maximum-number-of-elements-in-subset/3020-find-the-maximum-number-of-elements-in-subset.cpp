class Solution {
public:
    int maximumLength(vector<int>& nums) {
        unordered_map<long long,int>freq;
        for(int i:nums){
            freq[i]++;
        }
        int ans=1;
        //case for 1
        if(freq.count(1)){
            if(freq[1]%2==0) ans=max(ans,freq[1]-1);
            else ans=max(ans,freq[1]);
        }

        //case for other integer
        for(auto &[intt,cnt]:freq){
            if(intt==1)continue;
            long long cur=intt;
            int len=0;
            while(freq.count(cur) && freq[cur]>=2){
                len+=2;
                //overflow check krna
                if(cur>1000000000ll/cur)break;
                cur*=cur;
            }
            if(freq.count(cur) && freq[cur]==1)len++;
            else len--;

            ans=max(ans,len);
        }
        return ans;
    }
};