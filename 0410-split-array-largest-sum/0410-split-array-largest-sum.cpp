class Solution {
public:
    bool isSplitPossible(vector<int>& nums, int k,int mid){
        int Count=1;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>mid)return false;
            if(sum + nums[i]<=mid){
                sum+=nums[i];
            }
            else{
                Count++;
                sum=nums[i];
            }
        }
        if(Count>k)return false;
        else return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int ans=-1;
        int low=*min_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(), nums.end(), 0); //sums of all element ka STL function
        while(low<=high){
        int mid=low+(high-low)/2;
        if(isSplitPossible(nums,k,mid)){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
       }
       return ans;
    }
};