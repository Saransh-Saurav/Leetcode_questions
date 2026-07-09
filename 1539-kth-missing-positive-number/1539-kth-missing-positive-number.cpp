class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        for(int i:arr){
            if(i<=k)k++;// as series is from 1 to n and for every value present in arr <=k, the search of element inc by 1,like in arr [5,7] the 5th missing alement is 6 ie 5+1
            else break;
        }
        return k;
    }
};