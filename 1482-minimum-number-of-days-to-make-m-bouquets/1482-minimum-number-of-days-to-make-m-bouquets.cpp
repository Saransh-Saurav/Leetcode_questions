class Solution {
public:
    bool IsPossible(vector<int>& bloomDay,int mid,int m, int k){
        int count=0;
        int day=0;
        for(int j:bloomDay){
            if(mid>=j)count++;
            else{
                day+=count/k;
                count=0;
            }
        }
        day+=count/k;//last continuatation k liye ek baar aur line likhni pdegi bcz loop khatam ho gya hoga
        if(day>=m)return true;
        return false;
    }

    int minDays(vector<int>& bloomDay, int m, int k){
        if((long long)m*k>bloomDay.size())return -1;
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(IsPossible(bloomDay,mid,m,k)==true){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};


/* brute force-->TLE(Time Limit Exceeded) ho jaayega
int minDays(vector<int>& bloomDay, int m, int k) {
        if(m*k>bloomDay.size())return -1;
        int mini=*min_element(bloomDay.begin(),bloomDay.end());
        int maxi=*max_element(bloomDay.begin(),bloomDay.end());

        for(int i=mini;i<=maxi;i++){
            int count=0;
            int ans=0;
            for(int j:bloomDay){
                if(i>=j)count++;
                else{
                    ans+=count/k;
                    count=0;
                }
            }
            //last continuatation k liye ek baar aur line likhni pdegi bcz loop khatam ho gya hoga
            ans+=count/k;
            if(ans>=m)return i;
        }
    return -1;
    }
*/