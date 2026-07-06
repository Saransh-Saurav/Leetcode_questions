class Solution {
public:
    static bool SortingStyle(vector<int>&a, vector<int>&b){
        if(a[0]==b[0]) return a[1]>b[1];
        return a[0]<b[0];
    }

    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int ans=0;
        int maxEnd=0;
        sort(intervals.begin(),intervals.end(),SortingStyle);
        for(auto &i:intervals){
            if(i[1]<=maxEnd) continue;
            maxEnd=i[1];
            ans++;
        }

        return ans;
    }
};