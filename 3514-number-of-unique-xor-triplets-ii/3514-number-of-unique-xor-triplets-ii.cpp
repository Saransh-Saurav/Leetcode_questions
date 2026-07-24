class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        unordered_set<int> unique_val(nums.begin(),nums.end());
        unordered_set<int>pair_xor;
        for(int i:unique_val){
            for(int j:unique_val){
                pair_xor.insert(i^j);
            }
        }
        unordered_set<int>ans;
        for(int p:pair_xor){
            for(int z:unique_val){
                ans.insert(p^z);
            }
        }

        return ans.size();
    }
};