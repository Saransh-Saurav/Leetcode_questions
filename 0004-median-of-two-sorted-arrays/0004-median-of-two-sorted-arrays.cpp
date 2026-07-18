class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int total=n+m;
        int mid1=(total-1)/2;
        int mid2=total/2;
        int count=0;
        int i=0,j=0;
        int first=0,second=0;
        while(i<n || j<m){
            int value;
            if(i<n && (j>=m || nums1[i]<nums2[j])){
                value=nums1[i];
                i++;
            }
            else {
                value=nums2[j];
                j++;
            }

            if(count==mid1){
                first=value;
            }
            if(count==mid2){
                second=value;
            }
            
            count++;
        }

        if(total%2==0){
            return (first+second)/2.0;
        }
        else return second;
    }
};