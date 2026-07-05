class Solution {
public:
    int DaysReqd(vector<int>& weights, int capacity){
        int day=1,load=0;
        for(int i=0;i<weights.size();i++){
            if(load+weights[i]>capacity){
                day++;
                load=weights[i];
            }
            else load+=weights[i];
        }
        return day;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int sum=0;
        for(int i=0;i<weights.size();i++){
            sum+=weights[i];
        }
        int low=*max_element(weights.begin(),weights.end());
        int high=sum;

        while(low<=high){
            int mid=low+(high-low)/2;
            int dayreqd=DaysReqd(weights,mid);
            if(dayreqd>days) low=mid+1;
            else high=mid-1;
        }

        return low;
    }
};