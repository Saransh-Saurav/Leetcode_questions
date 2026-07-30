class Solution {
public:
    string reverseWords(string s) {
        vector<string>word_arr;
        string word="";
        for(char ch:s){
            if(ch!=' ')word+=ch;
            else if(!word.empty()){
                word_arr.push_back(word);
                word="";
            }
        }
        if(!word.empty()){
                word_arr.push_back(word);
                word="";
            }
        reverse(word_arr.begin(),word_arr.end());

        string ans="";
        for(int i=0;i<word_arr.size();i++){
            ans+=word_arr[i];
            if(i<word_arr.size()-1)ans+=' ';
        }

        return ans;
    }
};