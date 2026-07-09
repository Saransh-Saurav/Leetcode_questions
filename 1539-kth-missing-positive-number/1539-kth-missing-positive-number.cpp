class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low=0;
        int high=arr.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int missing=arr[mid]-(mid+1);
            if(missing<k)low=mid+1;
            else high=mid-1;
        }
        //at this point low>high and we got the interval in which kth missing element lies
        //we have to return arr[high]+more-->arr[high]+(k-missing)
        //but we have to tweek this because for case like [5,6,7] k=4 the answer should be 4 but high pointing to -1 gives error ans,so we have to eliminate arr[high]
        // arr[high]+k-missing->(we can write missing=arr[high]-(high+1))
        //so it becomes--> arr[high]+k-(arr[high]-high-1)-->k+high +1
        //now high+1==low so we can write--> k+low;
        return low+k;
    }
};