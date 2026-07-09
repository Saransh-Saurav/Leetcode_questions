class Solution {
public:
    bool canPlace(vector<int>& position, int m,int mid){
       int count=1;
       int lastPosition=position[0];
       for(int j=1;j<position.size();j++){
        if(position[j]-lastPosition>=mid){
            lastPosition=position[j];
            count++;
        }
        if(count>=m)return true;
       }
       return false;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int low =1;
        int high=position.back() - position.front();
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(canPlace(position,m,mid)==true){
                ans=mid;
                low=mid+1;
            }
            else high=mid-1;
        }
        return ans;
    }
};