class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>freq;
        for(char ch:s)freq[ch]++;

        vector<pair<char,int>>v(freq.begin(),freq.end());
        //sorting it on the basis of freq of character
        sort(v.begin(),v.end(),[](auto &a,auto &b){
            return a.second>b.second;
        });
        string ans="";
        for(auto p:v){
            ans+=string(p.second,p.first);//function does this string(count, character)
        }

        return ans;
    }
};