class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++){
            int n=matrix[0].size();
            if(target>matrix[i][n-1])continue;
            int low=0;
            int high=n-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                if(matrix[i][mid]==target)return true;
                if(target>matrix[i][mid])low=mid+1;
                else high=mid-1;
            }
        }
        return false;
    }
};