class Solution {
public:
    string removeOuterParentheses(string s) {
        int layer=0;
        string ans="";
        for(char ch:s){
            if(ch=='('){
                if(layer>0)ans+=ch;
                layer++;
            }
            if(ch==')'&& layer>0){
                layer--;
                if(layer>0)ans+=ch;
            }
        }
        return ans;
    }
};