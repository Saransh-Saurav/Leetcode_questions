//Better solution --> Using hashmap
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            int remaining=target-nums[i];
            if(mpp.find(remaining)!=mpp.end()) return {mpp[remaining],i};
            mpp[nums[i]]=i;
        }
        return {};
    }
};

//TC->O(n)
//SC-> AVG=O(1) and WORST=O(N)