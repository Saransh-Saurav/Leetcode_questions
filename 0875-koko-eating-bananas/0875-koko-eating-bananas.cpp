class Solution {
public:
    long long FindingCeiling(vector<int>& piles, int mid){
        long long hours=0;
        for(int i:piles){
            hours+=ceil((double)i/mid); // ya use (i+mid-1)/mid
        }
        return hours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long hours=FindingCeiling(piles,mid);
            if(hours<=h){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};