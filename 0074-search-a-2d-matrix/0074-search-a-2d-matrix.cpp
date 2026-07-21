class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();

        int low=0;
        int high=m-1;
        int ansRow=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(matrix[mid][0]==target)return true;
            if(matrix[mid][0]<target){
                ansRow=mid;
                low=mid+1;
            }
            else high=mid-1;
        }

        if(ansRow == -1) return false;
        int low2=0;
        int high2=n-1;
        while(low2<=high2){
            int mid2=low2+(high2-low2)/2;
            if(matrix[ansRow][mid2]==target)return true;
            if(matrix[ansRow][mid2]<target)low2=mid2+1;
            else high2=mid2-1;
        }

        return false;
    }
};