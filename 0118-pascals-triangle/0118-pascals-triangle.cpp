class Solution {
public:
    vector<int>generateRow(int row){
        vector<int>ansRow;
        long long cell=1;
        ansRow.push_back(cell);
        for(int col=1;col<row;col++){
            cell=cell*(row-col);
            cell=cell/col;
            ansRow.push_back(cell);
        }
    return ansRow;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=1;i<=numRows;i++){
           vector<int>temp=generateRow(i);
           ans.push_back(temp);
        }
        return ans;
    }
};