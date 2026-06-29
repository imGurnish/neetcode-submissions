class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> mp;
        int mn=INT_MAX;
        int mx=INT_MIN;
        for(auto i:nums){
            mn=min(i,mn);
            mx=max(i,mx);
            mp[i]=1;
        }
        int maxi=0;
        int curr=0;
        for(int i=mn;i<=mx;i++){
            if(mp[i]) curr++;
            else{
                maxi=max(maxi,curr);
                curr=0;
            }
        }
        maxi=max(curr,maxi);
        return maxi;
    }
};
