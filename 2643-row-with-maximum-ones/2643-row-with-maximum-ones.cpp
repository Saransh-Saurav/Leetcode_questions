class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int max_cnt=-1;
        int idx=-1;
        for(int i=0;i<mat.size();i++){
            int count=0;
            for(int j=0;j<mat[0].size();j++){
                count+=mat[i][j];
            }
            if(count>max_cnt){
                max_cnt=count;
                idx=i;
            }
        }
        return {idx,max_cnt};
    }
};